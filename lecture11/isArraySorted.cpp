#include <iostream>
using namespace std;

bool isArraySorted(int *a, int n, int i) {
	// base case
	if (i == n-1) {
		return true;
	}
	bool kyachotasortedhai = isArraySorted(a,n,i+1);
	if (kyachotasortedhai==true and a[i]<=a[i+1])
	{
		return true;
	}
	else {
		return false;
	}

}
// 2nd case
bool sorted(int *a, int n) {
	// base case
	if (n == 1) {
		return true;
	}
	// recurssive case
	bool kyachotasortedhai = sorted(a,n-1);
	if (kyachotasortedhai == true and a[n-2] <= a[n-1]) {
		return true;
	}
	else {
		return false;
	}
}
int main () {
	int a[] = {1,2,4,5,6,7};
	int n = sizeof(a) / sizeof(int),k = 0;

	if (isArraySorted(a,n,k)) {
		cout << "sorted" << endl;
	}
	else {
		cout << "Not Sorted" << endl;
	}
	// 2nd case
	if (sorted(a,n)) {
		cout << "sorted" << endl;
	}
	else {
		cout << "not sorted" << endl;
	}
	return 0;
}