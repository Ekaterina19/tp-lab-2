#include <iostream>
#include"task3.h"
int change(int val)
{
	return val + 1;
}
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