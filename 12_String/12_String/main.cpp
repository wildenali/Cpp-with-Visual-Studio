#include <iostream>
#include <string>

using namespace std;

int main() {
	char *str = "Hello";
	char str2[512] = "Heeey ini string coooy";
	cout << str << endl;
	cout << str2 << endl;

	string s;
	cout << s << endl;

	s = "Ini teks teks ";
	cout << s << endl;
	cout << s.at(9) << endl;

	string kata;
	cout << "Masukan kata nya: "; cin >> kata;
	cout << kata << endl;

	s = s + kata;
	cout << s << endl;
	cout << s.length() << endl;




	system("pause");
	return 0;
}