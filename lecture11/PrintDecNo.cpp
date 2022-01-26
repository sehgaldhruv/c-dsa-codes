#include <iostream>
using namespace std;
void PrintDec(int n) {
	if (n == 0) {
		return ;
	}
	// recursive case
	cout << n << " ";
	PrintDec(n-1);
}
int main () {
	int n;
	cin >> n;
	PrintDec(n);

	return 0;
}