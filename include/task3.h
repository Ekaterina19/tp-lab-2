#pragma once
<<<<<<< HEAD
template<typename T,const int N>
void map (T Arr[], T(*change)(T))
=======
template<typename T>
T change(T val)
{
	return val + 1;
}

template<typename T,const int N>
T* map (T Arr[], T(*change)(T))
>>>>>>> 3fe165bde73ca37edcf6a306dfc19e94d8b021f8
{	
	
	for (auto i = 0; i < N; i++)
	{
		Arr[i] = change(Arr[i]);
	}
	return Arr;
}