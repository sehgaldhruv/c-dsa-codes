#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	for (n = 0; n != 0; n = n/10) {
		cout << n%10;
	}
	return 0;
}