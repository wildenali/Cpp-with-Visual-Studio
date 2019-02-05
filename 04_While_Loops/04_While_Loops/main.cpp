#include <iostream>

using namespace std;

int main() {
	
	int a = 0;


	// while do
	while (a < 5)
	{
		cout << "di dalem while, loop ke " << a++ << endl;
	}


	// do while 
	int b = 1;
	do
	{
		cout << "ini do while" << endl;
	} while (b < 0);
	cout << "selesai" << endl;



	system("pause");

	return 0;
}