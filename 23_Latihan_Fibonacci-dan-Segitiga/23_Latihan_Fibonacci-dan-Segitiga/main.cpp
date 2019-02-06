#include <iostream>

using namespace std;

int main() {

	// ============= fibonacci =============
	// rumus fibonacci dulu -> f_n = f_n1 + f_n2;
	/*
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	
	cout << "============== Latihan Fibonacci ==============\n";
	cout << "Program deret Fibonacci \n";
	cout << "Masukan nilai ke-n : ";
	cin >> n;

	f_n1 = 1;
	f_n2 = 0;
	f_n = f_n1 + f_n2;
	cout << f_n << " ";
	for (int i = 1; i <= n; i++)
	{
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;

		cout << f_n << " ";
	}
	cout << endl;
	cout << "============== Latihan Fibonacci ==============\n";
	*/
	// ============= fibonacci =============



	// ============= segitiga siku-siku pola 1 =============
	int a;
	cout << "Pola ke 1 -> Masukan panjang pola: ";
	cin >> a;
	cout << "Pola 1\n";

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// ============= segitiga siku-siku pola 1 =============

	// ============= segitiga siku-siku pola 2 =============
	int b;
	cout << "Pola ke 2 -> Masukan panjang pola: ";
	cin >> b;
	cout << "Pola 2\n";

	for (int i = 1; i <= b; i++)
	{
		for (int j = b; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	// ============= segitiga siku-siku pola 2 =============

	// ============= segitiga siku-siku pola 3 =============
	int c;
	cout << "Pola ke 3 -> Masukan panjang pola: ";
	cin >> c;
	cout << "Pola 3\n";

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int k = c; k > i; k--)
		{
			cout << "*";
		}
		cout << endl;
	}
	// ============= segitiga siku-siku pola 3 =============

	// ============= segitiga siku-siku pola 4 =============
	int d;
	cout << "Pola ke 4 -> Masukan panjang pola: ";
	cin >> d;
	cout << "Pola 4\n";

	for (int i = 1; i <= d; i++)
	{
		for (int j = d; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// ============= segitiga siku-siku pola 4 =============

	// ============= segitiga siku-siku pola 5 =============
	int e;
	cout << "Pola ke 5 -> Masukan panjang pola: ";
	cin >> e;
	cout << "Pola 5\n";

	for (int i = 1; i <= e; i++)
	{
		for (int j = e; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2*i-1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// ============= segitiga siku-siku pola 5 =============

	// ============= segitiga siku-siku pola 6 =============
	int f;
	cout << "Pola ke 6 -> Masukan panjang pola: ";
	cin >> f;
	cout << "Pola 6\n";

	for (int i = 1; i <= f; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int k = f; k >= (2*i-f); k--)
		{
			cout << "*";
		}
		cout << endl;
	}
	// ============= segitiga siku-siku pola 6 =============

	// ============= segitiga siku-siku pola 7 =============
	int g;
	cout << "Pola ke 7 -> Masukan panjang pola: ";
	cin >> g;
	cout << "Pola 7\n";

	for (int i = 1; i <= g; i++)
	{
		for (int j = g; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 2; i <= g; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int k = g; k >= (2 * i - g); k--)
		{
			cout << "*";
		}
		cout << endl;
	}
	// ============= segitiga siku-siku pola 7 =============




	system("pause");
	return 0;
}