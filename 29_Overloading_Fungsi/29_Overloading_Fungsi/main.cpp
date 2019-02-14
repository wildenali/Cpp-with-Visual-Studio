#include <iostream>

using namespace std;



// basic fungsi
int luas_kotak(int panjang, int lebar) {
	int luas = panjang * lebar;
	return luas;
}

// overload function
int luas_kotak(int panjang) {
	int luas = panjang * panjang;
	return luas;
}


double luas_kotak(double sisi) {
	double luas = sisi * sisi;
	return luas;
}

int main() {
	cout << "Luas kotak 2x3: " << luas_kotak(2, 3) << endl;
	cout << "Luas kotak 2x2: " << luas_kotak(2) << endl;
	cout << "Luas kotak 2.5x2.5: " << luas_kotak(2.5) << endl;



	cin.get();
	return 0;
}