#include <iostream>
using namespace std;

int main () {

	char ch;
	int x;
	cin >> ch;

	x = ch;

	cout << "char: " << ch << " , ASCII code: " << x << endl;
	if (x >= 65 && x <= 90) {
		cout << "Upper case" << endl;
	}
	else if (x >= 97 && x <= 122) {
		cout << "Lower case" << endl;
	}
	else {
		cout << "Special Character" << endl;
	}

	if (ch >= 'A' && ch <= 'Z') {
		cout << "Upper case" << endl;
	} 
	else {
		cout << "Lower case" << endl;
	}

	return 0;
}