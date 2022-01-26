#include <iostream>
using namespace std;
int main () {
	int a = 100;
	// int a = 300; // not allowed

	if (a > 0) {
		int a = 200;
		cout << (::a) << endl; //200
		::a = ::a + 1;
	}

	cout << (::a) << endl; //100

	// return 0;.

}