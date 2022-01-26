#include <iostream>
#include <cstring>
using namespace std;

void printsubstrings(char *a) {
   int len = strlen(a);
   for (int i = 0; i < len; j++) {
   	for (int j = i; j < len; j++) {
   		for (int k = i; k <= j; k++) {
   			cout << a[k];
   		}
   		cout << endl;
   	}
   }

int main () {
	char a[] = "abcd";

	printsubstrings(a);

	return 0;

}