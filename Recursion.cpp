/*#include <iostream>

using namespace std;

int factorio(int n) {
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}
	else
	{ 
		return n * factorio(n - 1); 
	}
	
}
int fibonachi(int n) 
{
	if (n == 1 || n == 2) {
		return 1;
	}
	if (n == 0) {
		return 0;
	}
	return fibonachi(n-1)+ fibonachi(n - 2);
}

int main() {
	int n;
	cout << "input n = ";
	cin >> n;
	cout << "=============" << endl;
	cout << factorio(n) << endl;
	cout << "=============" << endl;
	cout << fibonachi(n);
	return 0;
}*/