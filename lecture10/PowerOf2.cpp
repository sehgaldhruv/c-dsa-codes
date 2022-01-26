#include <iostream>
using namespace std;

int x;
int solve(int n){
	if (n == 0) {
		return 1;
	}
	// Recursive Case
	return x*solve(n-1);
}
int main () {
	int n, x;
	cin >> n >> x;

	cout << x*solve(n-1) << endl;
	return 0;
}