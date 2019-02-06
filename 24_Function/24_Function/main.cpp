#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

/*
library cmath referensi bisa di lihat di sini
www.cplusplus.com/reference/cmath
www.cppreference.com
*/

// 1. cara menggunakan fungsi yg udah ada
// 2. latihan membuat dadu dengan function
// 3. function dengan return, membuat fungsi dengan ada kembaliannya
// 4. function TANPA return, membuat fungsi TANPA dengan ada kembaliannya


// 3. function dengan return, membuat fungsi dengan ada kembaliannya
int kuadrat(int x) {
	int y = x * x;
	return y;
}

int tambah(int x, int y) {
	int z;
	z = x + y;
	return z;
}

void tampilkan() {
	cout << "ini fungsi tanpa kembalian, tampolkaan" << endl;
}

void tampilkan2(int tampil) {
	cout << "Hasiiiilllny adalaaah ";
	cout << tampil << endl;
}

int main() {

	/*	
	// 1. cara menggunakan fungsi yg udah ada
	int x;
	cout << "Akar dari: ";
	cin >> x;

	double y = sqrt(x);
	cout << "adalah " << y << endl;
	*/

	/*
	// 2. latihan membuat dadu dengan function
	while (true)
	{
		char lanjut;
		cout << "Lempar dadu? (y/n)";
		cin >> lanjut;

		if (lanjut == 'y')
		{
			cout << 1 + (rand() % 6) << endl;
		}
		else if (lanjut == 'n')
		{
			break;
		}
		else
		{
			cout << "ketEk y atau n dooong" << endl;
		}
		
	}
	*/

	// 3. function dengan return, membuat fungsi dengan ada kembaliannya
	int input, hasil;
	cout << "nilai kuadrat dari ";
	cin >> input;
	
	hasil = kuadrat(input);
	cout << hasil << endl;

	int inputA, inputB, hasilTambah;
	cout << "Masukan nilai A: ";
	cin >> inputA;
	cout << "Masukan nilai B: ";
	cin >> inputB;

	hasilTambah = tambah(inputA, inputB);
	cout << hasilTambah << endl;

	
	// 4. function TANPA return, membuat fungsi TANPA dengan ada kembaliannya
	tampilkan();
	tampilkan2(hasilTambah);


	system("pause");
	return 0;
}