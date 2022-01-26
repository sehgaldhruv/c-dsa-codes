 #include <iostream>
using namespace std;

int main () {
	int n;

	int no =1;
	int row , col;

	cin >> n;
	row = 1;
	while (row <= n) {

		col=1;

		while(col<=row) {
			cout << no << " ";

			no=no+1;
			col=col+1;
		}
		cout<< '\n';
		row = row+1;
	}
	return 0;
}

