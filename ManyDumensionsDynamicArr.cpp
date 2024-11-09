#include <iostream>
using namespace std;


int main() 
{
	int rows = 4;
	int column = 5;
	cout << "Input row = ";
	cin >> rows;
	cout << endl;
	cout << "Input col = ";
	cin >> column;
	cout << endl;

	int **arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[column];
	}
	
	/////////////////////////////////
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = rand() % 9;
		}
	}

	
	//////////////////////////////////////////
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < column; j++){ 
			cout << arr[i][j]; }
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;

}