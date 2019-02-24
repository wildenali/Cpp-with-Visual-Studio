#include <iostream>
using namespace std;


// enum digunakan ketika suatu data yang sudah diketahui jumlahnya dan tidak banyak


enum warna {merah, putih, hitam, coklat = 5, hijau, biru};

int main() {


	warna kain;	

	kain = coklat;

	if (kain == hitam)
	{
		cout << "warna kain hitam" << endl;
	}

	cout << kain << endl;

	cin.get();
	return 0;
}