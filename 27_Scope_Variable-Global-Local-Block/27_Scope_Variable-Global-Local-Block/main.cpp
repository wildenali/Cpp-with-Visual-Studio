#include <iostream>

using namespace std;

int x = 10;	// global variable

int ambil_global() {
	return x;	// mengambil global variable
}

int x_local() {
	int x = 5;	// variable local scopenya x_local()
	return x;
}


int main() {

	cout << "1. Variable global: " << x << endl;
	int x = 8;
	cout << "2. Variable local main: " << x << endl;
	cout << "3. Variable ambil_global: " << ambil_global() << endl;
	cout << "5. Variable x_local: " << x_local() << endl;
	cout << "6. Variable local main: " << x << endl;

	cout << "7. Variable local main: " << x << endl;
	{
		cout << "8. Variable local main: " << x << endl;
		// block scope
		int x = 1;
		cout << "9. Variable local block: " << x << endl;
		cout << "10. Variable ambil_global: " << ambil_global() << endl;
		cout << "11. Variable ambil_global dengan unery: " << ::x << endl;	// ambil x yang palng jauuuuh di atas
	}
	cout << "12. Variable local main: " << x << endl;


	system("pause");
	return 0;
}