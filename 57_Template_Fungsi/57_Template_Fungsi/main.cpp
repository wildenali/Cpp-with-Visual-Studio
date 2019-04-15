#include <iostream>

using namespace std;

void print(int data) {
	cout << data << endl;
}

void print(double data) {
	cout << data << endl;
}

void print(char data) {
	cout << data << endl;
}


// template fungsi adalah membuat fungsi yang dapat digunakan secara umum
template<typename T>
void printdong(T data) {
	cout << data << endl;
}

// misal mau mengkonversi sesuatu menjadi integer, ini contoh kasus aja
template<typename T>
int toInt(T data) {
	return int(data);
}


template<typename T, typename U>
T max(T a, U b) {
	return (a > b) ? a : b;
}



int main() {

	print(5);
	print(5.2324);
	print('c');

	printdong(5);
	printdong(5.2324);
	printdong('c');

	printdong(toInt(10.213));
	
	cout << max(10, 103.5) << endl;

	printdong<int>(20.123);

	cout << max<double, int>(11.1, 103) << endl;

	system("pause");
	return 0;
}