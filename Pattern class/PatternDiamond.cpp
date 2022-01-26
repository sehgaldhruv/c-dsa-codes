#include <iostream>
using namespace std;
int main () {
	int n;
	cin >> n;

	for (int row = 1; row <= n; row++) {
		// 1. print n-row times spaces 
		for (int i = 1; i <= n-row; i++) {
			cout << "*";
		}

		// 2. print '*' one time
		cout << "*";

		// 3. print spaces 2*row-3times
		for (int i = 1; i <= 2*row-3; i++) {
			cout << " ";
		}

		// 4. print '*' one time
		if (row != 1) {
			cout << "*";
		}
		for (int i = 1; row < n; row++) {
			// 1. print row times spaces 
			for (int i = 1; i <= row; i++) {
				cout << "*";
			}
			// 2. print '*'
			cout << " ";

			// 3. print spaces 2*(n-row-1)-1
			for (int i = 1; i <= 2*(n-row-1)-1; i++) {
				cout << " ";
			}
			// 4. print '*'
			if (row != n-1) {
				cout << "*";
			}
			for (int i = 1; i <= row; i++) {
				cout << "*";
			}
			cout << endl;   
		

	}
	return 0;
}