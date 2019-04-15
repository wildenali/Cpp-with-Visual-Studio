#include <iostream>
#include "otong.h"



void fungsi2() {
	std::cout << "ini adalah fungsi biasa" << std::endl;
}


//using namespace otong;

int main() {
	fungsi2();

	std::cout << otong::b << std::endl;
	otong::fungsi();
	otong::cout(100);

	//std::cout << b << std::endl;
	//fungsi();
	//cout(100);

	system("pause");
	return 0;
}