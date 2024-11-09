//#include <iostream>
//#include <ctime>
//
//
//using namespace std;
//
// 
//void Swap(int *a,int *b) 
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void FillArray(int *arr, const int size) 
//{
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 5000;
//	}
//}
//void PrintArray(int *arr, const int size)
//{
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << endl;
//	}
//}
//void BubbleSort(int *arr, const int size) {
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size-1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				/*int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;*/
//				Swap(&arr[j], &arr[j+1]);
//			}
//		}
//	}
//}
//
//
//
//int main() {
//	srand(time(NULL));
//	const int size=20;
//	int arr[size];
//	FillArray(arr, size);
//	PrintArray(arr, size);
//	cout << "=========================" << endl;
//	BubbleSort(arr, size);
//	PrintArray(arr, size);
//	cout << "=========================" << endl;
//}
