#include <iostream>
using namespace std;

int main () {
	int a[3][4] = {
		{1,2,3,4},
		{4,5,6,7},
		{10,11,12,13}
	};
    
    int n , m;
	// cout << a[0][2] << endl;
    for (int row = 0; row < n; ++row) {
    	for (int col = 0; col < m; col++) {
    		cout << a[row][col] << " ";
    	}
    	cout << endl;
    }
	return 0;
}