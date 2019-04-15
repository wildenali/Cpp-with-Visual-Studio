#include <iostream>

// ================ contoh try catch runtime error dengan exception ================
//#include <array>
//#include <exception>
// ================ contoh try catch runtime error dengan exception ================

// ================ contoh2 try catch runtime error dengan exception ================
#include <exception>
// ================ contoh2 try catch runtime error dengan exception ================


using namespace std;


// 1. syntax error -> salah pemrograman karena sintaks
// 2. linking error
// 3. non-error
// 4. runtime error


// ================= 4. runtime error =================
/*
int pembagian(int &num, int &denum) {
	return num / denum;
}
*/
// ================= 4. runtime error =================




// ================ contoh2 try catch runtime error dengan exception ================
int pembagian(int &num, int &denum) {
	if (denum == 0)
	{
		throw overflow_error("Error: pembagi nol");
	}

	return num / denum;
}
// ================ contoh2 try catch runtime error dengan exception ================




int main() {

	// ================= 4. runtime error =================
	/*
	int a;
	int b;
	int c;
	char is_lanjut;

	while (true)
	{
		cout << "num : ";
		cin >> a;
		cout << "denum : ";
		cin >> b;

		c = pembagian(a, b);
		cout << c << endl;

		cout << "lanjut?(y/n)";
		cin >> is_lanjut;
		if (is_lanjut == 'n' || is_lanjut =='N')
		{
			break;
		}
	}
	*/
	// ================= 4. runtime error =================

	// ================= 4. runtime error - Contoh 2 =================
	/*
	array<int, 5> a = { 0, 1, 2, 3, 4};
	cout << a.at(5) << endl;
	*/
	// ================= 4. runtime error - Contoh 2 =================
	

	// ================ contoh try catch runtime error dengan exception ================
	/*
	array<int, 5> a = { 0, 1, 2, 3, 4 };

	try
	{
		cout << a.at(5) << endl;
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	*/
	// ================ contoh try catch runtime error dengan exception ================


	// ================ contoh2 try catch runtime error dengan exception ================
	/*
	try
	{
		throw "sesuatu";
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
	*/

	int x;
	int y;
	int z;

	while (true)
	{
		cout << "num : ";
		cin >> x;
		cout << "denum : ";
		cin >> y;
		
		try
		{
			z = pembagian(x, y);
			cout << z << endl;
		}
		catch (exception &e)
		{
			cout << e.what() << endl;
		}
	}
	// ================ contoh2 try catch runtime error dengan exception ================







	cout << "akhir program" << endl;
	system("pause");
	return 0;
}