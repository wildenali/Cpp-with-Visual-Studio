#include <iostream>

using namespace std;

// Fungsi menghitung luas
double hitung_luas(double p, double l) {
	double luas = p * l;
	return luas;
}

double hitung_keliling(double p, double l) {
	double keliling = 2 * (p + l);
	return keliling;
}

void tampilkan_luas(double p, double l) {
	cout << "Tampilkan Luas: ";
	cout << hitung_luas(p, l) << endl;
}

void tampilkan_keliling(double p, double l) {
	cout << "Tampilkan Keliling: ";
	cout << hitung_keliling(p, l) << endl;
}

int main() {

	double panjang, lebar;
	cout << "Panjang: ";
	cin >> panjang;
	cout << "Lebar: ";
	cin >> lebar;

	cout << "Luasnya adalah: ";
	cout << hitung_luas(panjang, lebar) << endl;
	cout << "Kelilingnya adalah: ";
	cout << hitung_keliling(panjang, lebar) << endl;


	tampilkan_luas(panjang, lebar);
	tampilkan_keliling(panjang, lebar);

	system("pause");
	return 0;
}