#include <iostream>
#include <string>

using namespace std;

int getOption();

int main() {

	int pilihan = getOption();
	char is_continue;

	enum option{CREATE = 1, READ,  UPDATE, DELETE, FINISH};

	while (pilihan != FINISH)
	{
		switch (pilihan)
		{
		case CREATE:
			cout << "Menambah data Mahasiswa" << endl;
			break;
		case READ:
			cout << "Tampilkan data Mahasiswa" << endl;
			break;
		case UPDATE:
			cout << "Ubah data Mahasiswa" << endl;
			break;
		case DELETE:
			cout << "Hapus data Mahasiswa" << endl;
			break;
		default:
			cout << "Pilihan tidak ditemukan" << endl;
			break;
		}

		label_continue:

		cout << "Lanjutkan?(y/n) : ";
		cin >> is_continue;
		if ((is_continue == 'y') | (is_continue == 'Y')) {
			pilihan = getOption();
		}
		else if ((is_continue == 'n') | (is_continue == 'N')) {
			break;
		}
		else {
			goto label_continue;
		}

	}
	cout << "Selesai" << endl;

	system("pause");
	return 0;
}




int getOption() {
	int input;
	//system("clear");
	system("cls"); //untuk windows
	cout << "\nProgram CRUD data mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tambah Data Mahasiswa" << endl;
	cout << "2. Tampilkan Data Mahasiswa" << endl;
	cout << "3. Ubah Data Mahasiswa" << endl;
	cout << "4. Hapus Data Mahasiswa" << endl;
	cout << "5. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "Pilih [1-5]?: ";
	cin >> input;
	return input;
}