#include <iostream>
#include "task2.h"
int gen()
{	
	static int t = 48;
	return t++;
}
int main()
{
	int const N= 6;
	int* Arr=nullptr;
	Arr = createArr <int , N>(gen);
	for (auto i = 0; i < N; i++)
	{
		std::cout << Arr[i] << ' ';;
	}
	return 0;
}
