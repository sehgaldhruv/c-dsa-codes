// MergeSort
#include <iostream>
using namespace std;

void print (int *a, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void merge(int *a, int *b, int *c, int s, int e) {
	int mid = (s+e)/2;

	int i = s, j = mid+1, k = s;
	while (i <= mid and j <= e) {
		if (b[i] < c[j]) {
			a[k++] = b[i++];
		}
		else {
			a[k++] = c[i++];
		}
		else {
			a[k++] = c[j++];
		}
	}
	while (i <= mid) {
		a[k++] = b[i++];
	}
	while (j <= e) {
		a[k++]
	}
}