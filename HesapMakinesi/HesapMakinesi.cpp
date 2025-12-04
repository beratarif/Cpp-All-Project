

#include <iostream>
using namespace std;

int main()
{
	int sayi1, sayi2;
	char islem;
	cout << " Hesap Makinesine Hosgeldiniz!" << endl;
	cout << " Islemi giriniz (+, -, *, /): ";
	cin >> islem;
	cout << " Birinci sayiyi giriniz: ";
	cin >> sayi1;
	cout << "Ýkinci sayiyi giriniz: ";
	cin >> sayi2;
	switch (islem) {
		case '+':
			cout << "Sonuc: " << sayi1 + sayi2 << endl;
			break;
		case '-':
			cout << "Sonuc: " << sayi1 - sayi2 << endl;
			break;
		case '*':
			cout << "Sonuc: " << sayi1 * sayi2 << endl;
			break;
		case '/':
			if (sayi2 != 0) {
				cout << "Sonuc: " << sayi1 / sayi2 << endl;
			}
			else {
				cout << "Hata: Sifira bolme hatasi!" << endl;
			}
			break;
		default:
			cout << "Gecersiz islem!" << endl;
			break;
	}
}
