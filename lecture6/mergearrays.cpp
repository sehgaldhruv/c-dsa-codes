#include <iostream>
using namespace std;
void printArray(int[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void MergeArrays(int a[], int b[], int m, int n) {
	int k = m+n-1;
	int j = n-1;
	int i = m-1;

	while (i >= 0 and j >= 0) {
		if (a[i] < b[j]) {
			a[k] = b[j];
			k--;
			j--;
		}
		else {
			a[k] = a[j];
			k--;
			i--;
		}
	}
	while (j >= 0) {
		a[k--  ]
	}
}