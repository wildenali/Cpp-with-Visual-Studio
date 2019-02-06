#include <iostream>
using namespace std;

int main() {

	int pijatTangan = 5;
	int pijatKaki = 5;

	// Postincrement
	cout << pijatTangan << endl;
	cout << pijatTangan++ << endl;
	cout << pijatTangan << endl;

	cout << endl << endl;

	// Preincrement
	cout << pijatKaki << endl;
	cout << ++pijatKaki << endl;
	cout << pijatKaki << endl;

	cin.get();
	return 0;
}