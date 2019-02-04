#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <Windows.h>

using namespace std;

int main() {

	int num, numRand;
	char yn;
	string name;
	srand(time(NULL));

	cout << "Masukan nama dulu: ";
	cin >> name;

	while (true)
	{
		cout << "Haay " << name << ", Mau main game ga (y/n)?: ";
		cin >> yn;

		if (yn == 'n' || yn == 'N') {
			return 0;
		}
		if (yn == 'y' || yn == 'Y') {
			break;
		}
	}
	

	while (true)
	{
		cout << "Komputer akan menebak angka yang kamu pikirkan mulai dari 0 sampai 5, Silahkan Masukan angka tebakannya: ";
		cin >> num;
		numRand = rand() % 6;		// generate a number from 0 sampai 5

		if (numRand == num)
			cout << "You Menang" << endl;
		else if (numRand == -1)
			break;
		else
			cout << "Kalah lu, Komputer yang menang, angka komputer: " << numRand << endl;
		
	}



	system("pause");
	return 0;
}