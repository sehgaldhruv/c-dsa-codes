#include <iostream>
using namespace std;

int main () {
	int N, i, no, n;
	bool isprime;

	cin >> n;

	no = 2;
	while (no <= n) {
		// check if no. is prime or not,
		isprime = true;
		i = 2;
		while (i <= no-1) {
			if (no % i == 0) {
				isprime = false;
			}
			i++;
		}
		// if no is not prime then print it , else ignore it
		if (isprime == true) {
			cout << no << " ";
		}
		no++;
	} 
	cout << endl;

	return 0;
}