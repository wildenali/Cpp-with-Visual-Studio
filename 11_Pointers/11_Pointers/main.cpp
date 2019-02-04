#include <iostream>

using namespace std;

int main() {
	//0x220004, 0x220008, 0x22000a;

	int *p;
	int n = 5;
	int m = 10;

	p = &n;
	cout << p << endl;		// cek alamat si n
	cout << *p << endl;		// cek alamat si n
	*p = 3;
	cout << "n = " << n << endl;		// cek alamat si n
	cout << "*p = " << *p << endl;		// cek alamat si n

	*p = *p + 10;
	cout << "n = " << n << endl;		// cek alamat si n
	cout << "*p = " << *p << endl;		// cek alamat si n

	(*p)++;
	cout << "n = " << n << endl;		// cek alamat si n
	cout << "*p = " << *p << endl;		// cek alamat si n

	p = &m;
	cout << p << endl;		// cek alamat si m



	system("pause");
	return 0;
}