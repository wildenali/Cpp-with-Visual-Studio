#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	fstream myFile;
	int hasil;

	myFile.open("data.bin", ios::in| ios::binary);

	// myFile >> hasil;
	myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));


	cout << "Besar integer adalah: " << sizeof(hasil) << endl;
	cout << hasil << endl;

	cin.get();
	return 0;
}


/*
fstream myFile;
int number = 12354;
myFile.open("data.bin", ios::out | ios::binary);

myFile.write(reinterpret_cast<char*>(&number), sizeof(number));

myFile.close();
*/