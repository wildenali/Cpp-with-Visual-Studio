#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "Masukan nilai = ";
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "benar angkanya 1" << endl;
		break;
	case 2:
		cout << "benar angkanya 2" << endl;
		break;
	case 3:
		cout << "benar angkanya 3" << endl;
		break;
	case 4:
		cout << "benar angkanya 4" << endl;
	case 5:
		cout << "benar angkanya 5" << endl;
	default:
		cout << "ini default" << endl;
		break;
	}


	system("pause");
	return 0;
}