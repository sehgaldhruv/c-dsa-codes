#include <iostream>
using namespace std;
int main () {
	int n , row ,i , no; 

    cin>>n;

	row = 1;
	while (row <=n) {
		i=1;
		while (i <= n-row) {
			cout << no;
			no = no+1;

			i=i+1;
		}
		i=1;
		no=2*row-2;
		while (i<row) {
			cout << no;
			no=no-1;

			i=i+1;
		}

		cout << '\n';
		row =row+1;

	    }

	     return 0;
	 }