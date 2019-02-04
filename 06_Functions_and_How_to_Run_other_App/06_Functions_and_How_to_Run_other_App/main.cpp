#include <iostream>
#include <Windows.h>

using namespace std;

int penJumlahan(int a, int b) {
	int c;
	c = a + b;

	return c;
}

void halloYa() {
	cout << "Cek ini halow" << endl;
}

void startProgram(string filename) {
	ShellExecute(NULL, "open", filename.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main() {

	halloYa();

	int x, y;
	cout << "Masukan Angka Pertama: ";
	cin >> x;

	cout << "Masukan Angka Pertama: ";
	cin >> y;

	cout << "Hasil Penjumlahannya adalah " << penJumlahan(x, y) << endl;

	startProgram("notepad");	// buka program notepad
	startProgram("mspaint");	// buka program paint
	

	system("pause");
	return 0;
}