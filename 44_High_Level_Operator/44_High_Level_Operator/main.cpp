#include <iostream>
#include <string>

using namespace std;


// =========================== Comma Operator ===========================
void printData(int val) {
	cout << val << endl;
}
// =========================== Comma Operator ===========================

// =========================== Bitwise Operator ===========================
#include <bitset>

// =========================== Bitwise Operator ===========================
void printBinary(unsigned short val, string nama) {
	cout << nama << " = " << bitset<8>(val) << endl;
}
// =========================== Bitwise Operator ===========================

int main() {

	// =========================== Ternary Operator ===========================
	cout << "=========================== Ternary Operator ===========================" << endl;

	// ternary operator = ?
	// kondisi ? hasil1 : hasil2;

	int a, b;
	string hasil1, hasil2, output;

	hasil1 = "otong";
	hasil2 = "ucup";


	a = 5;
	cout << "masukin angka: ";
	cin >> b;

	output = (a <= b) ? hasil1 : hasil2 ;
	
	cout << output << endl;


	cout << "=========================== Ternary Operator ===========================" << endl;
	// =========================== Ternary Operator ===========================

	cout << endl << endl << endl;

	// =========================== Comma Operator ===========================
	cout << "=========================== Comma Operator ===========================" << endl;
	int x, y, z;

	x = (y = 4, cout << y << endl, z = 6, cout << z << endl, (y + z));
	cout << x << endl;

	x = (y = 4, printData(y), z = 6, printData(z), (y + z));
	cout << x << endl;

	cout << "=========================== Comma Operator ===========================" << endl;
	// =========================== Comma Operator ===========================

	cout << endl << endl << endl;

	// =========================== Bitwise Operator ===========================
	cout << "=========================== Bitwise Operator ===========================" << endl;
	// operator bitwise
	// &	AND bitwise AND
	// |	OR bitwise Inclusive OR
	// ^	XOR bitwise Exclusive OR
	// ~	NOT bitwise NOT
	// <<	SHL Shift bits Left
	// >>	SHR Shift bits Right

	unsigned short r = 6;
	unsigned short s = 10;
	unsigned short t;

	
	cout << "&	AND bitwise AND" << endl;
	cout << "t = r & s" << endl;
	t = r & s;
	printBinary(r, "r");
	printBinary(s, "s");
	printBinary(t, "t");
	cout << "t = " << t << endl;
	cout << "&	AND bitwise AND" << endl;
	
	cout << endl << endl;

	cout << "|	OR bitwise Inclusive OR" << endl;
	cout << "t = r | s" << endl;
	t = r | s;
	printBinary(r, "r");
	printBinary(s, "s");
	printBinary(t, "t");
	cout << "t = " << t << endl;
	cout << "|	OR bitwise Inclusive OR" << endl;

	cout << endl << endl;

	cout << "^	XOR bitwise Exclusive OR" << endl;
	cout << "t = r ^ s" << endl;
	t = r ^ s;
	printBinary(r, "r");
	printBinary(s, "s");
	printBinary(t, "t");
	cout << "t = " << t << endl;
	cout << "^	XOR bitwise Exclusive OR" << endl;

	cout << endl << endl;

	cout << "~	NOT bitwise NOT" << endl;
	cout << "t = r ~ s" << endl;
	t = ~r;
	printBinary(r, "r");
	printBinary(t, "t");
	cout << "t = " << t << endl;
	cout << "~	NOT bitwise NOT" << endl;

	cout << endl << endl;

	cout << "<<	SHL Shift bits Left" << endl;
	cout << "t = r << 2" << endl;
	t = r << 2;
	printBinary(r, "r");
	printBinary(t, "t");
	cout << "t = " << t << endl;
	cout << "<<	SHL Shift bits Left" << endl;

	cout << endl << endl;

	cout << ">>	SHR Shift bits Right" << endl;
	cout << "t = r >> 1" << endl;
	t = r >> 1;
	printBinary(r, "r");
	printBinary(t, "t");
	cout << "t = " << t << endl;
	cout << ">>	SHR Shift bits Right" << endl;

	cout << endl << endl;

	cout << endl << endl;

	cout << bitset<8>(r) << endl;
	printBinary(a, "a");
	cout << endl;

	cout << "=========================== Bitwise Operator ===========================" << endl;
	// =========================== Bitwise Operator ===========================

	cout << endl << endl << endl;

	// =========================== Casting Operator ===========================
	cout << "=========================== Casting Operator ===========================" << endl;
	
	int h = 5;
	float i = 6.67f;
	char j = 'd';

	cout << (float)h + i << endl;
	cout << h + (int)i << endl;
	cout << j + h << endl;
	cout << (char)(j + h) << endl;

	cout << "=========================== Casting Operator ===========================" << endl;
	// =========================== Casting Operator ===========================

	cout << endl << endl << endl;




	cout << endl << endl << endl;
	system("pause");
	return 0;
}