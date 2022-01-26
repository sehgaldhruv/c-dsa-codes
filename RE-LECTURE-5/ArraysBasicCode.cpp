#include <iostream>
using namespace std;

int main () {
	int macbookpro[] = {1,2,3,4,5,6}; // we can skip the elements , only
	int n = sizeof(macbookpro) / sizeof(int);

	// during initialization 

	for (int i = 0; i < n; i++){
		cout << macbookpro[i] << " ";
	}
	cout << endl;

	return 0;
}