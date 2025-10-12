// C++ Sayı Tahmin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

class randomNumber {
public:
	int number;
	int guess;
	int attempts;
	randomNumber() {
		std::srand(static_cast<unsigned int>(std::time(0))); // Seed the random number generator
		number = std::rand() % 100 + 1; // Random number between 1 and 100
		attempts = 0;
	}
	void getGuess() {
		std::cout << "Bir tahmin giriniz (1-100): ";
		while (!(std::cin >> guess) || guess < 1 || guess > 100) {
			std::cout << "Gecersiz giris. Lutfen 1 ile 100 arasinda bir sayi giriniz: ";
			std::cin.clear(); // Clear the error flag
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
		}
		attempts++;
	}
	bool checkGuess() {
		if (guess < number) {
			std::cout << "Daha yuksek bir sayi deneyin." << std::endl;
			return false;
		}
		else if (guess > number) {
			std::cout << "Daha dusuk bir sayi deneyin." << std::endl;
			return false;
		}
		else {
			std::cout << "Tebrikler! Dogru tahmin ettiniz: " << number << std::endl;
			std::cout << "Toplam deneme sayisi: " << attempts << std::endl;
			return true;
		}
	}
};

int main()
{
	randomNumber game;
	std::cout << "Sayi Tahmin Oyununa Hosgeldiniz!" << std::endl;
	bool guessed = false;
	while (!guessed) {
		game.getGuess();
		guessed = game.checkGuess();
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
// C++ Sayı Tahmin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

class randomNumber {
public:
	int number;
	int guess;
	int attempts;
	randomNumber() {
		std::srand(static_cast<unsigned int>(std::time(0))); // Seed the random number generator
		number = std::rand() % 100 + 1; // Random number between 1 and 100
		attempts = 0;
	}
	void getGuess() {
		std::cout << "Bir tahmin giriniz (1-100): ";
		while (!(std::cin >> guess) || guess < 1 || guess > 100) {
			std::cout << "Gecersiz giris. Lutfen 1 ile 100 arasinda bir sayi giriniz: ";
			std::cin.clear(); // Clear the error flag
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
		}
		attempts++;
	}
	bool checkGuess() {
		if (guess < number) {
			std::cout << "Daha yuksek bir sayi deneyin." << std::endl;
			return false;
		}
		else if (guess > number) {
			std::cout << "Daha dusuk bir sayi deneyin." << std::endl;
			return false;
		}
		else {
			std::cout << "Tebrikler! Dogru tahmin ettiniz: " << number << std::endl;
			std::cout << "Toplam deneme sayisi: " << attempts << std::endl;
			return true;
		}
	}
};

int main()
{
	randomNumber game;
	std::cout << "Sayi Tahmin Oyununa Hosgeldiniz!" << std::endl;
	bool guessed = false;
	while (!guessed) {
		game.getGuess();
		guessed = game.checkGuess();
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
