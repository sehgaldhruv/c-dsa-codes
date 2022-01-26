#include <iostream>
using namespace std;

void rotate(char *a, int k) {
	// 1. shift all characters by k positions ahead
	int len = Length(a);
	int i = len;
	while (i >= 0) {
		a[i+k] = a[i];
		i--;
	}
	// 2. bring last k characters to front 
	i = len;
	int j = 0;
	while (j < k) {
		a[j] = a[i];
		i++;
		j++;
	}
	// 3. add null at the len index
	a[len] = '\0';
	cout << a << endl;
}
int main () {
	char a[] = "coding";
	int k = 50;
	
}