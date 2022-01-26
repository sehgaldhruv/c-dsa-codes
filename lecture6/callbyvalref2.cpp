//callbyvalref
#include <iostream>
using namespace std;

	void update(int x) {
		x = x+1;
		cout << "X: " << x << endl;
	}

	void update1(int &x) {
		x = x+1;
		cout << "X: " << x << endl;
	}

	int main () {
		int a = 1; 
		cout << "Before update: " << a << endl;

		update1(a); 
		cout << "After update: " << a << endl;
	
	return 0;
}