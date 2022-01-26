#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int a[5], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (a[j] > a[j+1]) {
				swap (a[j], a[j+1]);
			}
		}
	}
}