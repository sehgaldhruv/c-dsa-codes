#include <iostream>
using namespace std;

int main () {
	int a[100][100];
	int row, col;

	cin >> row >> col;
	cout << "enter array elements: ";
	for (int i = 0; i < row; i++)
		for (int j =0; j < col; j++) {
			cin >> a[i][j];
		}
}
int key;
cout<<"enter key: ";
cin>>key;
for (int i = 0; i < row; i++) {
	for (int j = 0; j < col; j++) {
		if (key == a[i][j]) {
			cout << "key found at: " << a[i][j];
		}
	}
}
return 0;
}