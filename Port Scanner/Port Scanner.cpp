#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>

#pragma comment(lib, "ws2_32.lib")

bool isPortOpen(const char* ip, int port) {
    WSADATA wsaData;
    SOCKET sock;
    sockaddr_in server;

    // WinSock baþlatýlýyor
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
        return false;

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == INVALID_SOCKET)
        return false;

    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    inet_pton(AF_INET, ip, &server.sin_addr);

    // Timeout ayarý (150 ms)
    DWORD timeout = 150;
    setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (char*)&timeout, sizeof(timeout));
    setsockopt(sock, SOL_SOCKET, SO_SNDTIMEO, (char*)&timeout, sizeof(timeout));

    // Baðlantý kontrolü
    int result = connect(sock, (sockaddr*)&server, sizeof(server));

    closesocket(sock);
    WSACleanup();

    return (result == 0);
}

int main() {
    const char* targetIP;
    int startPort, endPort;

    std::cout << "Hedef IP: ";
    std::string ipInput;
    std::cin >> ipInput;
    targetIP = ipInput.c_str();

    std::cout << "Baslangic Portu: ";
    std::cin >> startPort;

    std::cout << "Bitis Portu: ";
    std::cin >> endPort;

    std::cout << "\nTaramaya basliyorum...\n\n";

    for (int port = startPort; port <= endPort; port++) {
        if (isPortOpen(targetIP, port)) {
            std::cout << "[+] Acik Port: " << port << "\n";
        }
        else {
            std::cout << "[-] Kapali Port: " << port << "\n";
        }
    }

    std::cout << "\nIslem tamamlandi.\n";
    return 0;
}
