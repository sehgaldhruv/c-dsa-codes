#include <iostream>
int main () {
using namespace std;
int a[] = {3,4,5,2};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i <= n-1; i++);
	for (int i = 0; i <= n-2; i++)
		if (a[i] < a[i+1])
			cout<< i << endl;



return 0;
}