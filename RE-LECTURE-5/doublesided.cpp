#include <iostream>
using namespace std;
int main () {
	int n = 7;
	for (int row = 1; row <= n/2+1; row++) {
		//print spaces 2*(n-row)-2*(row-1) : 2*(n-2*row)+2
		for (int i = 1; i <= 2*(n-2*row)+2; i++) {
			cout << " ";
		}

		// print decreasing numbers
		int no = row;
		for (int i = 1; i <= row; i++) {
			cout << no-- << " ";
		}

		// print space , we will print spaces spaces_count times
		for (int i = 0; i < 4*row-5-1; ++i)
		{
			cout << " ";
		}
		spaces_cout +=4;
		if (row !=1) {
			for (int i = 1; i <= row; ++i)
			{
				cout << i << " ";
			}
		}

		cout << endl;
	}
	for (int row = n/2; row > 0; row--) {
		// print spaces 2*(n-row)-2*(row-1): 2*(n-2*row)+2
	}
}