#include <iostream>


void FillArray(int* const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void ShowArray(const int* const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i]<<"\t";
	}
}



void push_back(int *&arr, int &size, const int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size] = value;
	size++;
	delete[] arr;
	arr = newArray;
}
void pop_back(int *&arr, int &size) 
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	delete[] arr;
	arr = newArray;
}
void push_st(int *&arr, int &size, const int value) 
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i+1] = arr[i];
	}
	newArray[0] = value;
	delete[] arr;
	size++;
	arr = newArray;
}
void pop_st(int*& arr, int& size)
{
	size--;
	int *newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i+1];
	}
	delete[] arr;
	arr = newArray;
}



int main() 
{
	int size = 5;
	int* arr = new int[size];
	FillArray(arr, size);
	ShowArray(arr, size);
	std::cout << std::endl;
	push_back(arr, size, 111);
	ShowArray(arr, size);
	std::cout << std::endl;
	pop_back(arr, size);
    ShowArray(arr, size);
	std::cout << std::endl;
	push_st(arr, size, 111);
	ShowArray(arr, size);
	std::cout << std::endl;
	pop_st(arr, size);
	ShowArray(arr, size);



	delete[] arr;
	
}