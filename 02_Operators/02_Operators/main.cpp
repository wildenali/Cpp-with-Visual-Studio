#include <iostream>

using namespace std;

int main() {
	int a;
	double b;

	a = 10;
	b = 3.14;

	cout << "Nilai a: " << a << endl;
	cout << "Nilai b: " << b << endl;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a x b = " << a * b << endl;

	cout << endl;

	cout << "Masukan Nilai a: ";
	cin >> a;
	cout << "Masukan Nilai b: ";
	cin >> b;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a x b = " << a * b << endl;
	

	system("pause");

	return 0;
}