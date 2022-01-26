// BinarySearch.cpp
#include <iostream>
using namespace std;

int BinarySearch(int *a, int s, int e, int key) {
	// Base Case
	if (s > e) {
		return -1;
	}

	// Recursive Case
	int m = (s+e) / 2;
	if (a[m] == key) {
		return m;
	}
	else if (a[m] > key) {
		return BinarySearch(a, s, m-1, key);
	}
	else{
		return BinarySearch(a, m+1, e, key);
	}
}

int main () {
	int a[] = {1,2,4,5,7,8,9};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0;)
}