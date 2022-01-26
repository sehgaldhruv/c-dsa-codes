#include <iostream>
using namespace std;

int main () {
	int [][4] = {
		{1,2,3,4},
		{7,8,9,29},
		{10,23,4,56},
		{96,49,49,390},
		{101,107,1098,847}
	};

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;

	int n = 5, m = 4;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
	return 0;
}