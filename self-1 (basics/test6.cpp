#include <iostream>
using namespace std;

int main () {
	int N , i , no , n;
	bool isPrime;

	cin >> n;

	no = 2;
	while (no <= n) {
		isPrime = true;
		i = 2;
		while (i <= no - 1) {
			if (n % i == 0) {
				isPrime = false;
			}
			i = i + 1;
		}
		if (isPrime == true) {
			cout << no << " ";
		}
		no = no + 1;
	}
	cout << endl;
	return 0;
}