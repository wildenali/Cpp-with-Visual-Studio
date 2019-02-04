#include <iostream>
#include <ctime>

using namespace std;

const int rows = 10;
const int columns = 10;
int matrix[rows][columns];

int maxKapal = 10;

void clearMatrix() {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = 0;
		}
	}
}

void showMatrix() {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int jumlahKapal() {
	int c = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			if (matrix[i][j] == 1) {
				c++;
			}
		}
	}
	return c;
}

void setKapal() {
	int s = 0;
	while (s < maxKapal)
	{
		int x = rand() % rows;
		int y = rand() % columns;
		if (matrix[x][y] != 1)
		{
			s++;
			matrix[x][y] = 1;
		}
	}
}

bool attack(int x, int y) {
	if (matrix[x][y] == 1)
	{
		matrix[x][y] = 2;
		return true;
	}

	return false;
}

int main() {

	srand(time(NULL));

	clearMatrix();
	setKapal();
	int pos1, pos2;
	char prompt;
	while (1) {
		cout << "Masukan Lokasinya: "; cin >> pos1 >> pos2;
		if (attack(pos1, pos2))
			cout << "You got me, wkwk" << endl;
		else 
			cout << "Sorry no ship at that location" << endl;
		cout << "Jumlah kapal yang keluar adalah : " << jumlahKapal() << endl;
		cout << "Do you want to surrender (y/n)? " << endl; cin >> prompt;
		if (prompt == 'y' || prompt == 'Y')
			break;
	}

	cout << "Game oveeeer!!!!" << endl;
	showMatrix();

	//showMatrix();
	//cout << "------------------------" << endl;
	//setKapal();
	//showMatrix();
	//attack(1, 1);
	//cout << "------------------------" << endl;
	//showMatrix();
	//cout << "Jumlah kapal yang keluar adalah : " << jumlahKapal() << endl;



	system("pause");
	return 0;
}