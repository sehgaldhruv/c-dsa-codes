#include <iostream>
using namespace std;
int length(char *a) {
	int i;
	int cnt = 0;
	for (i = 0; a[i] !='\0'; i++) {
		cnt ++;
	}
	return cnt;

}
void Rotate(char *a, int n) {
	int alen = length(a);

	for (int i = alen-1; i>=0; i--) {
		a[i+n] = a[i];
	}

	int i = 0, j = alen;
	for (int k = 0; k < n; k++) {
		a[i] = a[j];
		i++; j++;
	}
	a[alen] = '\0';
}
int main () {
	int n;
	cin >> n;
	char arr[100];
	cin >> arr;
	Rotate(arr,n);
	cout << arr;
	cout << endl;
	return 0;
}