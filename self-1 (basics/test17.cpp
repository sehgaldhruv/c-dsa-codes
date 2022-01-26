#include <iostream>
using namespace std;

void EvenNo(int i, int n) {
	for (int i = 2; i < n; i=i+2)
		cout << i << " ";
}
int main () {
	EvenNo();
	return 0;

}