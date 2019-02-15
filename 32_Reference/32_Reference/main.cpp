#include <iostream>

using namespace std;

// =================================== Reference Latihan - Fungsi dengan Reference ===================================
// prototype
void fungsi(int &);

void kuadrat(int &);
// =================================== Reference Latihan - Fungsi dengan Reference ===================================



int main() {


	// ============================================= Reference DASAR =============================================
	cout << "============================================= Reference DASAR =============================================" << endl;
	// variable
	int a = 5;
	
	cout << "Address dari a adalah: " << &a << endl;
	cout << "Nilai dari a adalah: " << a << endl << endl;

	// sharing alamat dengan si a, jadi si b referensi alamatnya adalah si alamat a
	// reference
	int &b = a;

	cout << "nilai dari b adalah: " << b << endl;
	cout << "Address dari b adalah: " << &b << endl << endl;

	b = 10;
	cout << "Nilai si a adalah: " << a << endl;
	cout << "Nilai si b adalah: " << b << endl << endl;

	a = 20;
	cout << "Nilai si a adalah: " << a << endl;
	cout << "Nilai si b adalah: " << b << endl << endl;
	cout << "============================================= Reference DASAR =============================================" << endl << endl << endl;
	// ============================================= Reference DASAR =============================================



	// =================================== Reference Latihan - Fungsi dengan Reference ===================================
	cout << "=================================== Reference Latihan - Fungsi dengan Reference ===================================" << endl;

	int x = 5;
	cout << "address x: " << &x << endl;
	cout << "  nilai x: " << x << endl;
	
	fungsi(x);
	cout << "  nilai x: " << x << endl;

	kuadrat(x);
	cout << "kuadrat x: " << x << endl;

	cout << "=================================== Reference Latihan - Fungsi dengan Reference ===================================" << endl << endl << endl;
	// =================================== Reference Latihan - Fungsi dengan Reference ===================================

	system("pause");
	return 0;
}




// =================================== Reference Latihan - Fungsi dengan Reference ===================================
// prototype
void fungsi(int &y) {
	y = 10;
	cout << "address y: " << &y << endl;
	cout << "  nilai y: " << y << endl;
}

void kuadrat(int &nilaiRef) {
	nilaiRef = nilaiRef * nilaiRef;
}
// =================================== Reference Latihan - Fungsi dengan Reference ===================================