#pragma once
template <typename T,const int N >
T* createArr(T(*gen)())
{
	T* Arr = new T[N];
	for (int i = 0; i < N; ++i)
		Arr[i] = gen();
	return Arr; 
}