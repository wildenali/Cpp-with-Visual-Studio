#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// Write - Cara pertama ===========================
	ofstream writer1("coba1.txt");
	writer1 << "coba isi ini dulu" << endl;
	writer1 << "ini paragraf kedua" << endl;
	writer1.close();
	// Write - Cara pertama ===========================

	
	// Write - Cara kedua ===========================
	ofstream writer2("coba2.txt");
	if (writer2.is_open()) {
		writer2 << "coba isi ini dulu" << endl;
		writer2 << "ini paragraf kedua percobaan kedua" << endl;
		
	}
	else {
		cout << "error niih" << endl;
	}
	writer2.close();
	// Write - Cara kedua ===========================

	// Read file ===========================
	// ifstream reader("coba3.txt");
	ifstream reader("coba4.txt");
	int a, b;
	if (reader.is_open()) {
		reader >> a;
		reader >> b;

		cout << "Jumlah dari a dan b adalah " << a + b << endl;
	}
	else {
		cout << "error niiiih, ga ada file nya" << endl;
	}
	reader.close();
	// Read file ===========================



	system("pause");
	return 0;
}