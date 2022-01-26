#include <iostream>
using namespace std;

int SumOfN(int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recurrsion relation
	// SumOfN(n) = n+SumOfN(n-1);
	return n+SumOfN(n-1);
	// int ChotaAns = SumOfN(n-1);
	// int BadaAns = n+ChotaAns;

	// return BadaAns;
}

int main () {
	int n;
	cin >> n;

	cout << SumOfN(n) << endl;

	return 0;
}