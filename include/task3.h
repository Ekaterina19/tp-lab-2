#pragma once
template<typename T>
T change(T val)
{
	return val + 1;
}

template<typename T,const int N>
T* map (T Arr[], T(*change)(T))
{	
	
	for (auto i = 0; i < N; i++)
	{
		Arr[i] = change(Arr[i]);
	}
	return Arr;
}