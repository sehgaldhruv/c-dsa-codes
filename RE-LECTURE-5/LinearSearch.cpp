#include <iostream>
using namespace std;

int main () {
	int a[] = {8,3,4,5,6,63,6,5,45,31};
	int n = sizeof(a) / sizeof(int);
	int key = 7;

	for(int i = 0; i < n; i++) {
		if (a[i] == key) {
			cout << "key is present at : " << i << endl;
			break;
		}
	}
	return 0;
}