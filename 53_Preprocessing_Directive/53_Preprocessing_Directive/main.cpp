// preprocessing directive
#include <iostream>
#include "librariiii.h"


#include "bersama.h"
// ============= ifdef =============
#include "foo.h"	// misal foo.h di comment maka,
#include "bar.h"	// si FOO yang di bar.h akan di eksekusi
// ============= ifdef =============

// macro preprocessing directive, menjabarkan diawal
#define PI 3.14		// mendefinisikan PI itu adalah 3.14
#define BAHASA "indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A, B) ((A > B) ? A:B)



#define ID 1

#if ID == 1
	#define LANG "Indonesia"
#else
	#define LANG "Inggris"
#endif



// ============= cara ngecek apakah sudah terdefinisikan atau belum =============

// ============= ifdef =============
/*
#define FOO "foo lama"
#ifdef FOO
	#define TEST_FOO "foo ada"
#else
	#define TEST_FOO "tidak foo ada"
#endif


// ifndef	-> jika tidak terdefinisi
#ifndef FOO
	#define FOO "foo lama"
#endif
// ============= ifdef =============
*/


// ============= pragma once =============
// jangan buat duplicat nya, hanya di buat sekali aja
// ============= pragma once =============


// ============= ahir preprocessing directive =============








double pi = 3.14;

using namespace std;




int main() {

	cout << "pi : " << pi << endl;
	cout << &pi << endl;

	cout << "PI : " << PI << endl;	// ini ga punya alamat
	// cout << &PI << endl; // ga bisa, karena itu preprocessing, cuma pengganti aja

	cout << "bahasa : " << BAHASA << endl;	// ini ga punya alamat

	cout << "kuadrat: " << KUADRAT(5) << endl;

	cout << "nilai maksimal: " << MAX(6,9) << endl;

	cout << "Bahasa Pilih: " << LANG << endl;



	#undef BAHASA
	#define BAHASA "inggris"
	cout << BAHASA << endl;

	cout << PIE << endl;
	cout << JUMLAH(4, 5) << endl;
	cout << MIN(4, 5) << endl;

	// ============= ifdef =============
	// cout << FOO << endl;
	// ============= ifdef =============

	Mahasiswa mahasiswa;
	mahasiswa.NIM = 10;
	cout << mahasiswa.NIM << endl;
	


	system("pause");
	return 0;
}