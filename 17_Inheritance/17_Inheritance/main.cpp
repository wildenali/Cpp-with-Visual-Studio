#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
	int varP;
	void PrintVarP();
	Parent() { varS = 5; varP = 10; }

private:
	int varS;
	void PrintVarS();

protected:
	int varX;
	void PrintX() { cout << "X = " << varX << endl; }
	void setX(int x) { varX = x; }

};

void Parent::PrintVarP() {
	cout << "P = " << varP << endl;
}

void Parent::PrintVarS() {
	cout << "S = " << varS << endl;
}

class Child : public Parent
{
public:
	void setP(int a) { varP = a; setX(a); PrintX(); }
};


int main() {

	Parent p;
	p.PrintVarP();

	Child c;
	c.PrintVarP();

	c.setP(30);
	c.PrintVarP();
	p.PrintVarP();



	system("pause");
	return 0;
}