#include <iostream>
#include"task3.h"
<<<<<<< HEAD
int change(int val)
{
	return val + 1;
}
=======
>>>>>>> 3fe165bde73ca37edcf6a306dfc19e94d8b021f8

int main()
{
	const int N = 6;
	int Arr[N];
	for (auto i = 0; i < N; i++)
	{
		Arr[i] = i + 1;
	}
	map <int,N> (Arr, change);
	for (auto i = 0; i < N; i++)
	{
		std::cout << Arr[i] << ' ';
	}
	return 0;

}