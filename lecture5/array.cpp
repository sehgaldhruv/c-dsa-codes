#include <iostream>
using namespace std;
int main () {
	int a[] = (1,4,2,5,7,6);
	int n = sizeof(a) / sizeof(int);

	for(int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	int key;
	cout << "Enter Key: ";
}