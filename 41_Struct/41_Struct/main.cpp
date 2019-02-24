#include <iostream>
#include <string>

using namespace std;


// struct -> data yang dibentuk oleh beberapa data


// ===================== Struct - Basic =====================
struct  buah
{
	string warna;
	float berat;
	int harga;
	string rasa;
};
// ===================== Struct - Basic =====================


// ===================== Struct - Nesting =====================
struct aktor
{
	string nama;
	int tahun_lahir;
};

struct film
{
	string judul;
	string genre;
	int tahun;

	// aktor struct nesting
	aktor pemeran_1;
	aktor pemeran_2;
};
// ===================== Struct - Nesting =====================

int main() {


	// ===================== Struct - Basic =====================
	cout << "===================== Struct - Basic =====================" << endl;
	buah aple;
	buah jeruk;

	aple.warna = "merah";
	aple.berat = 250.50f;
	aple.harga = 54900;
	aple.rasa = "manis kayanya";

	cout << "apel" << endl;
	cout << "	" << aple.warna << endl;
	cout << "	" << aple.berat << endl;
	cout << "	" << aple.harga << endl;
	cout << "	" << aple.rasa << endl;
	
	cout << endl << endl;

	jeruk.warna = "kuning";
	jeruk.berat = 1050.50f;
	jeruk.harga = 18900;
	jeruk.rasa = "aseeem";

	cout << "jeruk" << endl;
	cout << "	" << jeruk.warna << endl;
	cout << "	" << jeruk.berat << endl;
	cout << "	" << jeruk.harga << endl;
	cout << "	" << jeruk.rasa << endl;

	cout << "===================== Struct - Basic =====================" << endl;
	// ===================== Struct - Basic =====================
	
	cout << endl << endl;
	
	// ===================== Struct - Nesting =====================
	cout << "===================== Struct - Nesting =====================" << endl;
	aktor aktor1, aktor2;
	film film1, film2;
	// buat aktor 1;
	aktor1.nama = "Michael Otong";
	aktor1.tahun_lahir = 1992;

	// buat aktor 2;
	aktor2.nama = "Sandra Bulog";
	aktor2.tahun_lahir = 1985;

	film1.judul = "Pengabdi Wakanda";
	film1.genre= "Dokumenter";
	film1.tahun = 2018;
	film1.pemeran_1 = aktor1;
	film1.pemeran_2 = aktor2;

	film2.judul = "Dilan 2000";
	film2.genre = "Dokumenter";
	film2.tahun = 2010;
	film2.pemeran_1 = aktor1;

	cout << film1.judul << endl;
	cout << film1.pemeran_1.nama << endl;
	cout << film1.pemeran_2.nama << endl;

	cout << endl;

	cout << film2.judul << endl;
	cout << film2.pemeran_1.nama << endl;
	cout << film2.pemeran_2.nama << endl;

	cout << "===================== Struct - Nesting =====================" << endl;
	// ===================== Struct - Nesting =====================

	cout << endl << endl;


	system("pause");
	return 0;
}