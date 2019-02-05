#include <iostream>
// #include <string>	// di pindahin ke Cat.h
#include "Cat.h"

using namespace std;


int main() {

	Cat cat1("Frisky", 2);
	Cat cat2("FraskA", 1);
	Cat catC;

	cat1.introduce();
	cat2.introduce();
	catC.introduce();

	cout << cat2.getN() << endl;


	system("pause");
	return 0;
}