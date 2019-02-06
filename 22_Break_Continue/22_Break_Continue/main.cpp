#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i <= 10; i++)
	{
		
		if (i == 5) continue;
		if (i == 9) break;
		cout << i << endl;
	}


	cin.get();
	return 0;
}