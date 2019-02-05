#include <iostream>
using namespace std;

int main() {

	// int a;
	// cout << sizeof(a) << endl;

	/*
	// menggunakan pointer ====
	int * p;
	int a = 10;
	p = &a;
	cout << *p << endl;
	// menggunakan pointer ====
	*/

	/*
	// menggunakan pointer cara lain ====
	int * p = new int;
	*p = 100;
	cout << *p << endl;
	// menggunakan pointer cara lain ====
	*/

	/*
	// menggunakan pointer cara lain ====
	int * p = new int;
	*p = 100;
	cout << *p << endl;
	// menggunakan pointer cara lain ====
	*/


	// int A[100];		// ini cara manual masukin array nya, ini static memory
	// int N;
	int N;
	cout << "Masukan jumlah elemen: ";
	cin >> N;

	// ini dynamic memory
	int * A = new int[N];	// ini menyesuaikan array nya, sesuai yg di input kan si N, ini dilakuan supaya memori nya lebih irit, dibandingkan dengan yang manual

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	cout << "--------------------------" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << endl;
	}

	delete[] A;

	system("pause");
	return 0;
}