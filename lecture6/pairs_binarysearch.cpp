#include <iostream>
using namespace std;

int main () {
	int a[] = {1,2,3,4};
	int n = sizeof(a) / sizeof(int);
    int sum = 5;
    int y;

	for (int i = 0; i < n-1; i++) {
	      int x=a[i]; y=sum-x;

      for (int j=i+1; j < n-1; j++) {
      	if (a[j]==y) {
      		cout << x << " " << y << endl;
      	}
      }
	}
	return 0;
}