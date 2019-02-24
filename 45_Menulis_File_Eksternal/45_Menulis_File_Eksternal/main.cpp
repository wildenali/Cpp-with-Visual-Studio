#include <iostream>
#include <fstream>	// stream ke file
	// ofstream -> output file
	// ifstream -> input file
	// fstream

using namespace std;

int main() {

	ofstream myFile;


	// 3 mode penulisan
	// ios::out =  default, operasi output;
	// ios::app = menuliskan pada akhir baris;	// append
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan di hapus; // ini kaya overwrite

	myFile.open("data3.txt", ios::app);
	myFile << "\nPenulisan pada data3";
	myFile.close();

	int a = 123123;
	myFile.open("data1.txt", ios::out);
	myFile << "\nPenulisan pada data1" << endl;
	myFile << a;
	myFile.close();

	myFile.open("data2.txt", ios::trunc);
	myFile << "\nPenulisan pada data2";
	myFile.close();



	cin.get();
	return 0;
}