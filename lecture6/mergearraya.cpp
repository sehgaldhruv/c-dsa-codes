#include <iostream>
using namespace std;

int main() {
	int a[7] = {2,6,8};
	int b[4] = {1,3,7,9};

	int m = 3;
	int n = 4;
	void MergeArrays(int a[], int b[] , int m, int n) {
		int k = m + n - 1;
		int j = n-1;
		int i = m+1;

		while (i >= 0 and j >= 0) {
			if (a[i] < b[j]) {
				a[k] = b[j];
			}
		}
	}
	int k = m+n-1;
}