#include <iostream>
using namespace std;
int checkin (char* a) {
	int i;
	int cnt = 0;

	for (i = 0 ; a[i] !='\0'; i++) {
		cnt++;
	}
	 return cnt;


	}
	int main () {
		char a[100];

			cin >> a;
			cout << checkin(a);
			return 0;
		}
	