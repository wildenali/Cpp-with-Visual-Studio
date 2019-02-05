#include <iostream>
using namespace std;

class Point
{

/*
// Percobaan pertama =============
public:
	int x, y;
// Percobaan pertama =============
*/

// Percobaan kedua ===============
private:
	int x, y;

public:
	int getX() {
		return x;
	}
	
	int getY() {
		return y;
	}

	void print() {
		cout << "dari void print " << x << " " << y << endl;
	}

	void set(int a, int b) {
		x = a;
		y = b;
	}
// Percobaan kedua ===============

};


int main() {

	/*
	// Percobaan pertama =============
	Point p1, p2;
	p1.x = 5;
	p2.y = 3;
	cout << p1.x << " " << p2.y << endl;
	// Percobaan pertama =============
	*/
		
	// Percobaan kedua ===============
	Point p1, p2;
	p1.set(5, 4);
	cout << p1.getX() << " " << p1.getY() << endl;
	p1.print();

	p2.set(3, 7);
	cout << p2.getX() << " " << p2.getY() << endl;
	p2.print();

	p1 = p2;
	p1.print();
	// Percobaan kedua ===============



	system("pause");
	return 0;
}