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

Cat::Cat(string namE, int agE)
{
	age = agE;
	name = namE;
	n = 5;
}

Cat::Cat()
{
	age = 0;
	name = "Unnamed";
	n = 0;
}

int Cat::getAge()
{
	return age;
}

string Cat::getName()
{
	return name;
}

void Cat::meow()
{
	cout << "meow meoooow" << endl;
}

void Cat::introduce()
{
	meow();
	cout << "My name is: " << name << " and I'm " << age << " years old" << endl;
}

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