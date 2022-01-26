#include <iostream>
using namespace std;
void PrintInc(int n) {
	if (n == 0) {
		return ;
	}
	// recursive case
	PrintInc(n-1);
	cout << n << " ";
}
int main () {
	int n;
	cin >> n;
	PrintInc(n);

	return 0;
}
