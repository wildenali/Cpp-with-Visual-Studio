#include <iostream>

using namespace std;

int main2() {


	// looping array di c++11 ke atas
	/*
	for(deklarasi variable : array) {
	statement
	}

	*/
	int arrayNilai[13] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int nilai : arrayNilai) {
		cout << "main2 -> address: " << &nilai << " nilai: " << nilai << endl;
		nilai = 1;
	}

	cout << endl;

	// memanipulasi array dengan menggunakan referensi
	for (int &nilaiRef : arrayNilai) {
		nilaiRef *= 2;
	}

	cout << endl;

	for (int &nilaiRef : arrayNilai) {
		cout << "main2 -> address: " << &nilaiRef << " nilai: " << nilaiRef << endl;
	}

	cout << endl;



	system("pause");
	return 0;
}