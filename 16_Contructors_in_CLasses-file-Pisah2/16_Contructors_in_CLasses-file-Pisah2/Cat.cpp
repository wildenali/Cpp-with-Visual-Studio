#include "Cat.h"

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