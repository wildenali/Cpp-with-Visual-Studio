#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);		// ini fungsi untuk membuat text nya berwarna
	SetConsoleTextAttribute(h, FOREGROUND_BLUE);	// ini fungsi untuk membuat text nya berwarna
	cout << "ini warna apa?" << endl;

	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);	// ini fungsi untuk membuat text nya berwarna
	cout << "itu warna apa?" << endl;

	SetConsoleTextAttribute(h, FOREGROUND_GREEN);	// ini fungsi untuk membuat text nya berwarna
	for (int i = 0; i <= 10; i++) {
		cout << "Muncul lah " << i << endl;
	}

	system("pause");

	return 0;
}