#include <iostream>
#include <cstring>
#include "task1.h"

int main()
{

		const size_t n = 6;
		int *val = new int[n] {5, 3, 2, 4, 1, 6};
		msort<int>(val, n);
		for (int i = 0; i < n; i++)
			std::cout << val[i] <<' ';
		std::cout <<std::endl;


		double val_2[n]{ 4.0, 2.4, 2.5, 2.1, 3.0, -1};
		msort<double>(val_2, n);
		for (int i = 0; i < n; i++)
			std::cout << val_2[i] << ' ';
		std::cout << std::endl;

		char* val_3[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
		msort<char*>(val_3, n);
		for (int i = 0; i < n; i++)
			std::cout << val_3[i] << ' ';
		std::cout << std::endl;
		
		system("pause");
	return 0;
}

