#pragma once
template<typename T,const int N>
void map (T Arr[], T(*change)(T))
{	
	
	for (auto i = 0; i < N; i++)
	{
		Arr[i] = change(Arr[i]);
	}
	return Arr;
}