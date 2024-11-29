#include <iostream>


void FillArray(int* const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void ShowArray(int* const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i]<<"\t";
	}
}



int main()
{
	srand(time(NULL));
	int const size = 10;
	int* firstArray = new int[size];
	int* secondArray = new int[size];
	FillArray(firstArray, size);
	FillArray(secondArray, size);
	std::cout << "firstArray =\t";
	ShowArray(firstArray, size);
	std::cout << std::endl;
	std::cout << "secondArray =\t";
	ShowArray(secondArray, size);
	std::cout << std::endl;
	std::cout << "=============================================================================" << std::endl;
	delete[] firstArray;
	firstArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		firstArray[i] = secondArray[i];
	}
	std::cout << "firstArray =\t";
	ShowArray(firstArray, size);
	std::cout << std::endl;
	std::cout << "secondArray =\t";
	ShowArray(secondArray, size);
	delete[] secondArray;
	delete[] firstArray;
}