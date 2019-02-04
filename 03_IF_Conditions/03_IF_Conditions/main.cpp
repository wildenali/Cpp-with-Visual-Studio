#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Masukan Nilai A: ";
	cin >> a;

	cout << "Masukan Nilai B: ";
	cin >> b;

	if (a > b)
	{
		cout << "Nilai A Lebih BESAR dari B" << endl;
	}
	else if (a == b)
	{
		cout << "Nilai A SAMA DENGAN dari B" << endl;
	}
	else
	{
		cout << "Nilai A Lebih KECIL dari B" << endl;
	}

	system("pause");

	return 0;
}