#include <iostream>
using namespace std;

int main () {
	int a[] = {5,4,3,2,1};
	int n = sizeof(int) , temp;
	cout << "Before sorting: ";
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	// Bubble sort algorithm
	for (int i = 0 ; i < n - 1 ; i++) {
		for (int j = 0 ; j < n - 2 - i ; j++) {
			if (a[j] > a[j++]);
			swap(a[j] , a[j+1]);
		}
	}
}
cout << "After sorting: ";
for (int i = 0 ; i < n ; i++) {
	cout << a[i] << " ";
}