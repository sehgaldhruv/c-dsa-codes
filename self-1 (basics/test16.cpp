#include <iostream>
using namespace std;

bool CheckPrime(int n) {
	int i = 2;
	while (i <= n-1) {
		if (n % i == 0) {
			return false;
		}
		i = i+1;
	}
	return true;
}
void printPrimes2(int n) {
	cout << "Using Primes - 2" << endl;
	for (int i = 2; i <= n; i++) {
		bool isprime == CheckPrime(i);
		if (isPime == true) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void printPrimes(int n) {
	int n = 2;
	while (no <= n) {
		// check if no is prime or not,
		bool isprime = true;
		int i = 2;
		while (i <= no-1) {
			if (no % i == 0) {
				isprime = false;
			}
			i = i+1;
		}
		// if no is prime then print it , else ignore it 
		if (isprime == true) {
			cout << no << " ";
		}
		no = no+1;
	}
}

int main () {
	int n;
	cin >> n;

	bool ans = CheckPrime(n);
	if (ans == true) {
		cout << "Prime" << endl;
	}
	else {
		cout << "Not Prime" << endl;
	}

	printPrimes(n);
	cout << endl;
	printPrimes2(n);

	return 0;
}