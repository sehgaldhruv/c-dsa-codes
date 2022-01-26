#include <iostream>
using namespace std;

void PrintDec(int n) {
	// Base Case 
	if (n == 0) {
		return;
	}
	// Recursive case
	PrintDec(n-1);
	cout << n << " ";
}

int main () {
	int n; 
	cin >> n;

	PrintDec(n);

	return 0;
}