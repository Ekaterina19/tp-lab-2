#pragma once
template <typename T>
void msort(T* arr, const int n)
{
	if (typeid(arr[0]).name() != typeid(char*).name())
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i; j < n; j++)
			{
				if (arr[i] > arr[j])
				{
					T tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
}

template<>
void msort(char** arr, int n)
{
	if (typeid(arr[0]).name() == typeid(char*).name())
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i; j < n; j++)
			{
				if (strlen((char*)arr[i])>=strlen((char*) arr[j]))
				{
					char* tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
}
