#include <iostream>

using namespace std;

// =================================== Latihan Pointer - FUNGSI dengan POINTER ===================================
// prototype
void fungsi(int *);

void kuadrat(int *);
// =================================== Latihan Pointer - FUNGSI dengan POINTER ===================================

int main() {


	// =================================== Pointer DASAR ===================================
	cout << "=================================== Pointer DASAR ===================================" << endl;
	int a = 5;

	// pointer 
	//int *aPtr = &a;
	int *aPtr = nullptr;
	aPtr = &a;

	// int a mempunyai nilai dan address
	cout << "Nilai dari a: " << a << endl;
	cout << "Alamat dari a: " << aPtr << endl;

	// dereferencing, mengambil data dari sebuah pointer
	a = 10;
	cout << "Mengambil data dari pointer aPtr, adalah: " << *aPtr << endl;
	cout << "=================================== Pointer DASAR ===================================" << endl << endl << endl;
	// =================================== Pointer DASAR ===================================


	// =================================== Latihan Pointer - FUNGSI dengan POINTER ===================================
	cout << "=================================== Latihan Pointer - FUNGSI dengan POINTER ===================================" << endl;
	int x = 5;
	cout << "Address x adalah : " << &x << endl;
	cout << "Nilai x adalah   : " << x << endl;

	fungsi(&x);	// fungsi dengan input pointer

	kuadrat(&x);
	cout << "Nilai kuadrat x adalah   : " << x << endl;

	cout << "=================================== Latihan Pointer - FUNGSI dengan POINTER ===================================" << endl << endl << endl;
	// =================================== Latihan Pointer - FUNGSI dengan POINTER ===================================



	system("pause");
	return 0;
}



// =================================== Latihan Pointer - FUNGSI dengan POINTER ===================================
void fungsi(int *y) {
	cout << "address y adalah : " << y << endl;
	cout << "nilai y adalah   : " << *y << endl;
}

void kuadrat(int *valPtr) {
	*valPtr = (*valPtr) * (*valPtr);
}
// =================================== Latihan Pointer - FUNGSI dengan POINTER ===================================