// C++ Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class HesapMakinesi {
public:
	double sayi1, sayi2;

	void SayilariAl(){
		cout << "Birinci sayiyi giriniz: ";
		cin >> sayi1;
		cout << "Ikinci sayiyi giriniz: ";
		cin >> sayi2;
	}
	double topla() {
		return sayi1 + sayi2;
	}
	double cikar() {
		return sayi1 -sayi2;
	}
	double carp() {
		return sayi1 * sayi2;
	}
	double bol() {
		if (sayi2 != 0) {
			return sayi1 /sayi2;
		}
		else {
			cout << "Bir sayi sifira bolunemez!" << endl;
			return 0;
		}
	}
};

int main()
{
	HesapMakinesi h;

	int secim;

	cout << "Hesap Makinesine Hosgeldiniz!" << endl;
	cout << "1. Toplama" << endl;
	cout << "2. Cikarma" << endl;
	cout << "3. Carpma" << endl;
	cout << "4. Bolme" << endl;
	cout << "Seciminizi yapiniz (1-4): ";
	cin >> secim;
	h.SayilariAl();
	switch (secim) {
	case 1:
		cout << "Sonuc: " << h.topla() << endl;
		break;
	case 2:
		cout << "Sonuc: " << h.cikar() << endl;
		break;
	case 3:
		cout << "Sonuc: " << h.carp() << endl;
		break;
	case 4:
		cout << "Sonuc: " << h.bol() << endl;
		break;
	default:
		cout << "Gecersiz secim!" << endl;
		break;

	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
