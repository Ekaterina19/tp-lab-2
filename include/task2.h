#pragma once
template <typename T >
T gen()
{	
	static int t = 48;
	return t++;
}
template <typename T,const int N >
T* createArr(T(*gen)())
{
	T* Arr = new T[N];
	for (int i = 0; i < N; ++i)
		Arr[i] = gen();
	return Arr; 
}