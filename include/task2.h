#pragma once
<<<<<<< HEAD
=======
template <typename T >
T gen()
{	
	static int t = 48;
	return t++;
}
>>>>>>> 3fe165bde73ca37edcf6a306dfc19e94d8b021f8
template <typename T,const int N >
T* createArr(T(*gen)())
{
	T* Arr = new T[N];
	for (int i = 0; i < N; ++i)
		Arr[i] = gen();
	return Arr; 
}