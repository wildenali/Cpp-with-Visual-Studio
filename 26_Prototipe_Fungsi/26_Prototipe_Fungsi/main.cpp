#include <iostream>

using namespace std;

// Protype Function
double hitung_luas(double p, double l);
void println(double x);


int main() {

	double panjang, lebar, luas;
	cin >> panjang;
	cin >> lebar;
	
	luas = hitung_luas(panjang, lebar);

	println(luas);


	system("pause");
	return 0;
}


double hitung_luas(double p, double l) {
	return p * l;
}

void println(double x) {
	cout << "Hasil: " << x << endl;
}