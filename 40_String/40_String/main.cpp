#include <iostream>
#include <string>

using namespace std;

int main() {

	// ========================== String - Pengenalan ==========================
	cout << "========================== String - Pengenalan ==========================" << endl;
	// char kata[5] = { 'm', 'o', 'b', 'i', 'l' };
	// char array tidak bisa ditambahkan, fiks karena array
	// cout << kata << endl;


	string Kata("mobil");
	cout << Kata << endl;

	cout << endl;

	string data;
	cout << "Masukan data atau kalimat" << endl;
	cin >> data;
	cout << "data yang dimasukan adalah: " << endl;
	cout << data << endl;
	cout << "========================== String - Pengenalan ==========================" << endl;
	// ========================== String - Pengenalan ==========================

	cout << endl << endl << endl;

	// ========================== String - Operasi String ==========================
	cout << "========================== String - Operasi String ==========================" << endl;
	string kata2("cat");

	// menampilkan data string
	cout << kata2 << endl;

	// mengambil karakter berdasarkan index
	cout << "index ke 0: " << kata2[0] << endl;
	cout << "index ke 1: " << kata2[1] << endl;
	cout << "index ke 2: " << kata2[2] << endl;
	cout << "index ke 3: " << kata2[3] << endl;
	
	cout << endl;

	// mengubah karakter pada index
	cout << "// mengubah karakter pada index" << endl;
	kata2[1] = 'e';
	cout << kata2 << endl;

	cout << endl;

	// menyambung -> CONCATENATION
	cout << "// menyambung -> CONCATENATION" << endl;
	string kata3(kata2 + "ar");
	cout << kata3 << endl;

	cout << endl;

	string kata4("membahana");
	//kata3.append(kata4);
	//cout << kata3 << endl;

	kata3.append(" " + kata4);
	cout << kata3 << endl;

	string kata5("ahaaaayyyyy");
	kata3 += kata5;
	cout << kata3 << endl;

	kata3 += " " + kata5;
	cout << kata3 << endl;


	cout << "========================== String - Operasi String ==========================" << endl;
	// ========================== String - Operasi String ==========================
	
	cout << endl << endl << endl;

	// ========================== String - Komparasi ==========================
	cout << "========================== String - Komparasi ==========================" << endl;
	char kate[4] = { 'u', 'c', 'u', 'p' };
	char pembanding_kate[4] = { 'u', 'c', 'u', 'p' };
	if (kate == pembanding_kate)
	{
		cout << "Berhasil" << endl;
	}

	string input;
	string kata_rahasia("ucup");

	while (true)
	{
		cout << "tebak nama: ";
		cin >> input;
		
		if (input == kata_rahasia)
		{
			cout << "Yes berhasil, namanya : " << kata_rahasia << endl;
			break;
		}
		cout << "salaaah nebak" << endl;
	}

	cout << "tebak tebakan selesai" << endl;


	cout << "========================== String - Komparasi ==========================" << endl;
	// ========================== String - Komparasi ==========================


	cout << endl << endl << endl;

	// ========================== String - Akses Substring ==========================
	cout << "========================== String - Akses Substring ==========================" << endl;
	string kalimat_1("Dayat suka olahraga supaya sehat");
	string kalimat_2("Ucup suka makan pisang di pagi hari");

	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// substring, mengambil string di tengah-tengah
	// substr(index, panjang);
	cout << kalimat_1.substr(11, 8) << endl;
	cout << kalimat_2.substr(16, 6) << endl;

	// mencari posisi dari substring
	cout << "di kalimat 1 posisi -olahraga-	: " << kalimat_1.find("olahraga") << endl;
	cout << "di kalimat 1 posisi -olah-		: " << kalimat_1.find("olah") << endl;
	cout << "di kalimat 2 posisi -makan-	: " << kalimat_2.find("makan") << endl;
	cout << "di kalimat 2 posisi -olah-		: " << kalimat_2.find("olah") << endl;

	// jumlah berapa banyak si kata yg di cari
	int a = kalimat_1.find("ya");
	cout << a << endl;
	cout << kalimat_1.find("ya", a + 1) << endl;

	// mencari posisi dari belakang
	// rfind
	cout << kalimat_2.rfind("i") << endl;

	cout << "========================== String - Akses Substring ==========================" << endl;
	// ========================== String - Akses Substring ==========================


	cout << endl << endl << endl;

	// ========================== String - Substitusi String ==========================
	cout << "========================== String - Substitusi String ==========================" << endl;
	string kalimat_A("aku suka kamu suka, siapa? dia!");
	string kalimat_B("wakanda forever!!!");

	cout << "A: " << kalimat_A << endl;
	cout << "B: " << kalimat_B << endl;

	// swap string
	cout << "swap string" << endl;
	kalimat_A.swap(kalimat_B);
	cout << "A: " << kalimat_A << endl;
	cout << "B: " << kalimat_B << endl;

	cout << endl;

	// replace, mengganti string
	kalimat_B.replace(27, 3, "otong");
	//int posisi = kalimat_A.find("ah");
	kalimat_A.replace(
		kalimat_A.find("er"),
		2,
		"ah"
	);
	cout << "replace string" << endl;
	cout << "A: " << kalimat_A << endl;
	cout << "B: " << kalimat_B << endl;

	cout << endl;

	// insert string
	kalimat_A.insert(8, "dan hatiku ");
	cout << "insert string" << endl;
	cout << "A: " << kalimat_A << endl;
	cout << "B: " << kalimat_B << endl;

	cout << "========================== String - Substitusi String ==========================" << endl;
	// ========================== String - Substitusi String ==========================

	cin.get();
	cout << endl << endl << endl;

	// ========================== String - GetLine Console String ==========================
	cout << "========================== String - GetLine Console String ==========================" << endl;
	string kalimat_input;

	// getLine(cin, kalimat_input);
	cout << "masukan kalimat: ";
	getline(cin, kalimat_input);

	cout << "input anda: " << kalimat_input << endl;

	// jumlah kata dari input
	int posisi = 0;
	int jumlah = 0;
	
	while (true)
	{
		posisi = kalimat_input.find(" ", posisi + 1);
		jumlah++;
		cout << "posisi: " << posisi << " jumlah: " << jumlah << endl;
		if (posisi < 0)
		{
			break;
		}
	}
	cout << "jumlah kata: " << jumlah << endl;

	cout << "========================== String - GetLine Console String ==========================" << endl;
	// ========================== String - GetLine Console String ==========================

	cout << endl << endl;
	system("pause");
	return 0;
}