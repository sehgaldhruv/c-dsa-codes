//Print pattern
#include <iostream>
using namespace std;

int main () {
	int n , i , no;
	int row;

	cin >> n;

	row = 1;
	while (row <= n) {
		// 1. print n-row times spaces
		i = 1;
		while (i <= n - row) {
			cout << " ";
			i++;
		}
		// 2. print increasing numbers row times, start: row
		i = 1;
		no = row;
		while (i <= row) {
			cout << no;
			no = no + 1;

			i = i + 1;
		}
		// 3. print decreasing numbers row-1 times , start: 2*row-2
		i = 1;
		no = 2*row-2;
		while (i < row) {
			cout << no;
			no = no-1;

			i++;
		}
		cout << '\n';
		row = row + 1;
	} 

	return 0;
}