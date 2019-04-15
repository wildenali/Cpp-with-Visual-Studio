#include <iostream>

using namespace std;

int main() {
	// typedef adalah memberikan alias untuk tipedata

	typedef int	I;
	typedef int iVector2D[2];
	typedef unsigned long ulong;
	typedef double vektor[2];

	using numbers = double;

	I a = 10;
	int b[2] = { 1, 2 };

	iVector2D c = { 3, 4 };

	ulong d = 123123123123;

	vektor e = { 1.323, 5.3242 };

	numbers f = 10.12123;

	cout << "nilai a : " << a << endl;
	cout << "nilai b: " << b[0] << " dan " << b[1] << endl;
	cout << "nilai c: " << c[0] << " dan " << c[1] << endl;
	cout << "nilai d: " << d << endl;
	cout << "nilai e: " << e[0] << " dan " << e[1] << endl;
	cout << "nilai f: " << f << endl;

	system("pause");
	return 0;

}
