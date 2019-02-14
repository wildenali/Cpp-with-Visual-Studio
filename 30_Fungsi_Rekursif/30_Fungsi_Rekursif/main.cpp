#include <iostream>

using namespace std;


// ================= rekursif dasar =================
// fungsi rekursif terbatas
int pangkatIterasi(int a, int b) {
	int hasil = a;
	for (int i = 1; i < b; i++)
	{
		hasil = hasil * a;
	}
	return hasil;
}


int pangkatRekursif(int a, int b) {

	//kasih pembatas
	if (b <= 1)
	{
		cout << "akhir dari rekursif" << endl;
		return a;
	}
	else
	{
		cout << "rekursif" << endl;
		return a * pangkatRekursif(a, (b - 1));
	}
}
// ================= rekursif dasar =================





// ================= latihan rekursif - FAKTORIAL - =================
// prototype 
int faktorial(int n);
// ================= latihan rekursif - FAKTORIAL - =================


// ================= latihan rekursif - FIBONACCI- =================
// prototype 
int fibonacci(int n);
// ================= latihan rekursif - FIBONACCI- =================



int main() {


	// ================= rekursif dasar =================
	cout << "================= REKURSIF DASAR- =================" << endl;
	int a;
	int b;
	cout << "angka: ";
	cin >> a;
	cout << "pangkat: ";
	cin >> b;
	cout << "Hasil Pangkat Iterasi: " << pangkatIterasi(a, b) << endl;
	cout << "Hasil Pangkat Rekursif: " << pangkatRekursif(a, b) << endl;
	// ================= rekursif dasar =================

	cout << "\n\n";

	cout << "================= latihan rekursif - FAKTORIAL - =================" << endl;
	// ================= latihan rekursif - FAKTORIAL - =================
	int angka, hasil;
	cout << "menghitung faktorial dari: ";
	cin >> angka;

	hasil = faktorial(angka);
	cout << endl;
	cout << "Nilai faktorialnya adalah: " << hasil << endl;
	// ================= latihan rekursif - FAKTORIAL - =================

	cout << "\n\n";

	cout << "================= latihan rekursif - FIBONACCI - =================" << endl;
	// ================= latihan rekursif - FIBONACCI- =================
	int angkaFib, hasilFib;
	cout << "Menghitung FIBONACCI ke-n: " << endl;
	cin >> angkaFib;
	hasilFib = fibonacci(angkaFib);

	cout << "Nilainya adalah: ";
	cout << hasilFib << endl;
	// ================= latihan rekursif - FIBONACCI- =================





	cout << "\n\n";

	system("pause");
	return 0;
}

// ================= latihan rekursif - FAKTORIAL - =================
int faktorial(int n) {
	if (n <= 1)
	{
		cout << n;
		return n;
	}
	else
	{
		cout << n << "*";
		return n * faktorial(n - 1);
	}
}
// ================= latihan rekursif - FAKTORIAL - =================



// ================= latihan rekursif - FIBONACCI- =================
int fibonacci(int n) {
	cout << "fungsi fibonacci " << n << endl;
	if ((n == 0) || (n == 1))
	{
		return n;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

}
// ================= latihan rekursif - FIBONACCI- =================