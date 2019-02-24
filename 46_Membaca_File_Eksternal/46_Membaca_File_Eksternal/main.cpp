#include <iostream>
#include <fstream>	// stream ke file
// ofstream -> output file
// ifstream -> input file
// fstream

#include <string>

using namespace std;

int main() {

	ifstream myFile;
	string output, buffer;
	bool isData = false;
	int no;
	string nama;

	// 3 mode penulisan
	// ios::out =  default, operasi output;
	// ios::app = menuliskan pada akhir baris;	// append
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan di hapus; // ini kaya overwrite

	/*
	myFile.open("data.txt", ios::out);

	
	cout << endl;

	getline(myFile, buffer);
	output.append(buffer);
	getline(myFile, output);
	output.append("\n" + buffer);

	cout << output << endl;


	cout << endl << endl;
	*/

	myFile.open("data.txt");

	while (!isData)
	{
		getline(myFile, buffer);
		output.append("\n" + buffer);
		if (buffer == "data")
		{
			isData = true;
		}
	}
	cout << output << endl;
	
	getline(myFile, buffer);
	cout << buffer << endl;
	int jumlah_data = 0;
	while (!myFile.eof())
	{
		myFile >> no;
		myFile >> nama;

		cout << no << "\t" << nama << endl;
		jumlah_data++;
	}
	cout << "jumlah_data: " << jumlah_data << endl;

	myFile.close();

	

	cin.get();
	return 0;
}