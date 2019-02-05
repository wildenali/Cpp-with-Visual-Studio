#include <iostream>
#include <string>
using namespace std;

class Cat
{
public:
	Cat(string namE, int agE);
	Cat();
	int getAge();
	string getName();
	void introduce();
	int getN() { return n; }

private:
	int n;
	int age;
	string name;
	void meow();
};