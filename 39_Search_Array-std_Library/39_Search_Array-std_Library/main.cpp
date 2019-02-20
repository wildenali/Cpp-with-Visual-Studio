#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

const int arraySize = 10;

void printArray(std::array <int, arraySize> &angka) {
	std::cout << "Array: ";
	for (int &a : angka)
	{
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void printArray(std::array <char, arraySize> &angka) {
	std::cout << "Array: ";
	for (char &a : angka)
	{
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main() {


	std::array <int, arraySize> angka = { 2,8,5,6,4,7,3,0,1,9 };
	std::array <char, arraySize> huruf = { 'f', 'd', 'e', 'h', 'c', 'o', 'q', 'w', 'z', 'l' };

	printArray(angka);
	printArray(huruf);

	std::cout << endl;

	// menggunakan algorithm search
	int angkaCari;
	bool ketemu;

	// sort dulu
	// search -> binary_search
	std::sort(angka.begin(), angka.end());
	printArray(angka);

	// search menggunakan binary_search
	std::cout << "Cari angka: ";
	std::cin >> angkaCari;
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);
	//cout << ketemu << endl;
	if (ketemu)
	{
		std::cout << "ketemu" << std::endl;
	}
	else
	{
		std::cout << "ga ada tuh" << std::endl;
	}


	std::cout << endl;
	std::system("pause");
	return 0;
}