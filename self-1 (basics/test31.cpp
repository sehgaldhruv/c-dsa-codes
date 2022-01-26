#include <iostream>
using namespace std;

bool isArraySorted(int *a, int n) {
	// Base Case
	if (n == 0 || n == 1) {
		return true;
	}

	// Recursive case
	bool isChotaSorted = isArraySorted(a+1, n-1);
	if (isChotaSorted == true and a[0] <= a[1]) {
		return true ;
	}
	else {
		return false;
	}
}
bool ArraySorted(int *a, int n, int i) {
	// Base Case
	if (i == n-1) {
		return true;
	}
	// Recursive Case
	bool ArrarySorted(int *a, int n, int i) {
		// Base Case
		if (i == n-1) {
			return true;
		}
		// Recursive case
		bool kyaChotaSortedHai = ArraySorted(a, n, i+1);
		if (kyaChotaSortedHai == true and a[i] <= a[i+1]) {
			return true;
		}
		else {
			return false;
		}
	}
	bool sorted (int *a, int n) {
		// Base Case
		if (n == 1) {
			return true;
		}

		// recursive case
		bool kyaChotaSortedHai = Sorted (a, n-1);
		if (kyaChotaSortedHai == true and a[n-2] <= a[n-1]) {
			return true;
		}
		else {
			return false;
		}
	}
	int main () {

		int a[] = {1,2,40,5,6,7,8};
		int n = sizeof(a)/sizeof(int);

		if (isArraySorted(a, n)) {
			cout << "Sorted" << endl;
		}
		else {
			cout << "not sorted" << endl;
		}
		if (ArrarySorted(a,n,0)) {
			cout << "Sorted" << endl;
		}
		else {
			cout << "not sorted" << endl;
		}
		if (sorted (a,n)) {
			cout << "sorted" << endl;
		}
		else {
			cout << "not sorted" << endl;
		}
	}
}