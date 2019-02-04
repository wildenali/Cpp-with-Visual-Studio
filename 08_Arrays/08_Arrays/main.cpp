#include <iostream>
#include <time.h>

using namespace std;

int main() {

	int a[5] = { 99, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}


	for (int i = 0; i < 5; i++)
	{
		cout << "Masukan Angka ke " << i << ": ";
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}

	system("pause");
	return 0;
}