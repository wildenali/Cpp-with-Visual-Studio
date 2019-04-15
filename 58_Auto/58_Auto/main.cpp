#include <iostream>
#include <string>

using namespace std;

template<typename T, typename U>
T max(T a, U b) {
	return (a > b) ? (T)a : (U)b;
}


int main() {


	int a = 15;
	string b = "test";
	double c = 15.1231;
	float d = 14.5f;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;

	auto e = 15;
	auto f = "test";
	double g = 15.1231;
	float h = 14.5f;

	cout << e << endl;
	cout << f << endl;
	cout << g << endl;
	cout << h << endl;

	cout << e << " tipe: " << typeid(e).name() << endl;
	cout << f << " tipe: " << typeid(f).name() << endl;
	cout << g << " tipe: " << typeid(g).name() << endl;
	cout << h << " tipe: " << typeid(h).name() <<endl;

	auto i = max(g, e);
	cout << i << " tipe: " << typeid(i).name() << endl;

	auto j = max(h, g);
	cout << i << " tipe: " << typeid(j).name() << endl;


	system("pause");
	return 0;
}