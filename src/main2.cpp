#include <iostream>
#include "task2.h"
<<<<<<< HEAD
int gen()
{	
	static int t = 48;
	return t++;
}
=======

>>>>>>> 3fe165bde73ca37edcf6a306dfc19e94d8b021f8
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
