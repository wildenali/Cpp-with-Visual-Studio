#include <iostream>
using namespace std;

// Bentuk penulisan dan cara pengaksesannya hampir sama dengan struct.Namun, union digunakan untuk menyatakan suatu memori dengan nama lebih dari satu.Artinya, variabel - variabel yang ada di dalam union menempati alamat memori yang sama.

union dataA
{
	int a;
	char b[4];
};

int main() {

	dataA data_union;

	data_union.a = 123;

	cout << " data a: " << data_union.a << endl;
	cout << " data b: " << data_union.b << endl;

	data_union.b[0] = 'a';
	data_union.b[1] = 'b';
	data_union.b[2] = 'c';
	data_union.b[3] = 'd';
	cout << " data a: " << data_union.a << endl;
	cout << " data b: " << data_union.b << endl;

	cin.get();
	return 0;
}