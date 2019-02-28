#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Mahasiswa {
	int NIM;
	string nama;
	string jurusan;

};

Mahasiswa ambilData(int posisi, fstream &myFile) {
	Mahasiswa bufferData;
	myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
	myFile.read(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));

	return bufferData;
}

void menulisData(Mahasiswa &data, fstream &myFile) {
	myFile.write(reinterpret_cast<char*>(&data), sizeof(Mahasiswa));
}

void menulisDatabyPos(int posisi,Mahasiswa &bufferData , fstream &myFile) {
	myFile.seekg((posisi - 1) * sizeof(Mahasiswa));
	myFile.write(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
}

int main() {

	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

	Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

	mahasiswa1.NIM = 1001;
	mahasiswa1.nama = "Ucup";
	mahasiswa1.jurusan = "Memasak";

	mahasiswa2.NIM = 1002;
	mahasiswa2.nama = "Otong";
	mahasiswa2.jurusan = "Menjahit";

	mahasiswa3.NIM = 1003;
	mahasiswa3.nama = "Sandra";
	mahasiswa3.jurusan = "Mesin";

	// myFile.write(reinterpret_cast<char*>(&mahasiswa1), sizeof(Mahasiswa));
	// myFile.write(reinterpret_cast<char*>(&mahasiswa2), sizeof(Mahasiswa));
	// myFile.write(reinterpret_cast<char*>(&mahasiswa3), sizeof(Mahasiswa));

	menulisData(mahasiswa1, myFile);
	menulisData(mahasiswa2, myFile);
	menulisData(mahasiswa3, myFile);

	mahasiswa3.nama = "mario";
	menulisDatabyPos(3, mahasiswa3, myFile);

	output = ambilData(3, myFile);

	cout << output.NIM << endl;
	cout << output.nama << endl;
	cout << output.jurusan << endl;

	

	myFile.close();






	cin.get();
	return 0;
}