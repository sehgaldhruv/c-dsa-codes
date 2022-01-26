#include <iostream>
using namespace std;

int SumOfArray(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	int chotasum = SumOfArray(a,n-1);
	int badasum = chotasum+a[n-1];

	return badasum;
}
int main () {
	int a[] = {1,2,4,8};
	int n = sizeof(a)/sizeof(int);
	cout << SumOfArray(a,n) << endl;

	return 0;
}