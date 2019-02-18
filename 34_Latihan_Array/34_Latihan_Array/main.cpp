#include <iostream>
#include <array>

using namespace std;

int main() {

	// ========================= Array || Latihan =========================
	cout << "========================= Array || Latihan =========================" << endl;
	
	array<int, 10> nilai;
	cout << "Program menampilkan grafik nilai" << endl << endl;

	for (int i = 0; i <= nilai.size(); i++)
	{
		cout << "jumlah mahasiswa dengan nilai ";
		if (i == 0)
		{
			cout << "0-9: ";
		}
		
		else if (i == nilai.size())
		{
			cout << "100: ";
			cin >> nilai[i];
		}
		else
		{
			cout << i * 10 << "-" << (i * 10) + 9 << ": ";
		}
		cin >> nilai[i];
		
	}

	// ========================= Array || Latihan =========================




	system("pause");
	return 0;
}