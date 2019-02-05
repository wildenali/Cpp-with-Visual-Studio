#include <iostream>

using namespace std;

int main() {

	// assignment
	int a = 10;

	cout << "Nilai awal dari a = " << a << endl;

	a += 3;
	cout << "Tambah 3 menjadi " << a << endl;

	a -= 3;
	cout << "Kurang 3 menjadi " << a << endl;

	a *= 3;
	cout << "Kali 3 menjadi " << a << endl;

	a /= 3;
	cout << "Bagi 3 menjadi " << a << endl;

	a %= 3;
	cout << "Sisa Bagi 3 menjadi " << a << endl;


	cin.get();
	return 0;
}