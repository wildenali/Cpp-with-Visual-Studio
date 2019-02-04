#include <iostream>

using namespace std;

int main() {
	double a, b;
	a = 0;
	b = 0;

	cin >> a;

	while (a != -1)
	{
		b += a;
		cin >> a;
	}

	system("pause");

	return 0;
}