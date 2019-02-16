#include <iostream>

// =========================== Array || STANDARD LIBRARY===========================
#include <array>
// =========================== Array || STANDARD LIBRARY===========================

using namespace std;

int main() {

	/*
	// =========================== Array BASIC ===========================
	cout << "=========================== Array BASIC ===========================" << endl;

	// membuat array
	int nilai[5];
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;


	cout << "Address: " << &nilai[0] << "  Nilainya adalah: " << nilai[0] << endl;
	cout << "Address: " << &nilai[1] << "  Nilainya adalah: " << nilai[1] << endl;
	cout << "Address: " << &nilai[2] << "  Nilainya adalah: " << nilai[2] << endl;
	cout << "Address: " << &nilai[3] << "  Nilainya adalah: " << nilai[3] << endl;
	cout << "Address: " << &nilai[4] << "  Nilainya adalah: " << nilai[4] << endl;

	cout << endl;

	int *ptr = nilai;
	*(ptr + 2) = 6;

	nilai[3] = 7;

	cout << "Address: " << &nilai[0] << "  Nilainya adalah: " << nilai[0] << endl;
	cout << "Address: " << &nilai[1] << "  Nilainya adalah: " << nilai[1] << endl;
	cout << "Address: " << &nilai[2] << "  Nilainya adalah: " << nilai[2] << endl;
	cout << "Address: " << &nilai[3] << "  Nilainya adalah: " << nilai[3] << endl;
	cout << "Address: " << &nilai[4] << "  Nilainya adalah: " << nilai[4] << endl;

	cout << endl;
	cout << "ukuran array: " << sizeof(nilai) << " byte" << endl;
	cout << "jumlah member array: " << sizeof(nilai)/sizeof(int) << endl;


	cout << "=========================== Array BASIC ===========================" << endl << endl << endl;
	// =========================== Array BASIC ===========================
	*/


	// =========================== Array || STANDARD LIBRARY===========================
	cout << "=========================== Array || STANDARD LIBRARY===========================" << endl;
	// membuat array dengan menggunakan standard library
	// array < int, jumlah array> namaArray
	array<int, 5> nilaiStandard;

	for (int i = 0; i <= 4; i++)
	{
		nilaiStandard[i] = i;
		cout << "Nilai [" << i << "] = " << i << " address : " << &nilaiStandard[i] << endl;
	}
	
	cout << endl;

	// cek ukuran array
	cout << "Ukuran arrayStandard adalah: " << nilaiStandard.size() << endl;
	
	// cek address awal dari 
	cout << "address arrayStandard adalah: " << &nilaiStandard.begin() << endl;
	// cek address akhir dari 
	cout << "address arrayStandard adalah: " << &nilaiStandard.end() << endl;
	// nilai dengan index
	cout << "address arrayStandard adalah: " << nilaiStandard.at(2) << endl;



	cout << "=========================== Array || STANDARD LIBRARY===========================" << endl;
	// =========================== Array BASIC ===========================



	system("pause");
	return 0;
}
