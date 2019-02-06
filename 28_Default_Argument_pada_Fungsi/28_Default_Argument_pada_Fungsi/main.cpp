#include <iostream>

using namespace std;

// jika si t nya ga ada pas di panggil, jadi t nya pake yg nilai 2 aja, karena default ya
double volume_kubus(double p = 1, double l = 3, double t = 2);


int main() {

	cout << " volume kubuus: " << volume_kubus(3, 4, 5) << endl;
	cout << " volume kubuus: " << volume_kubus(3, 4) << endl;
	cout << " volume kubuus: " << volume_kubus(3) << endl;
	cout << " volume kubuus: " << volume_kubus() << endl;


	cin.get();
	return 0;
}

// default argument
double volume_kubus(double p, double l, double t) {
	return p * l * t;
}