#include <iostream>
using namespace std;

int main () {
	int n , no , i;
	cin >> n;

	for (no = 2 ; no <= n ; no++) {
		bool isprime = true;
		for (i = 2 ; i <= no-1 ; i++) {
			if (no % i == 0) {
				isprime = false;
			}
		}
		if (isprime == true) {
			cout << no << " ";
		}

	}
	cout << endl;
	return 0;

}