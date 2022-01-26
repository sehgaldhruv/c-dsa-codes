#include <iostream>
using namespace std;

bool Check7(int *a, int n, int i) {
	// Base Case
	if (i == n) {
		return false;
	}
	// recursive case
	if (a[i] == 7){
		return true;
	}
	bool chotemai7hai = Check7(a,n,i+1);
	return chotemai7hai;

}
int first7(int *a, int n, int i) {
	// base case 
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		return i;
	}
	int chotemai7hai = first7(a,n,i+1);
	return chotemai7hai;
}
// Using Reference Variable
void last7(int *a, int n, int i, int &ans) {
	// Base Case
	if (i == n) {
		return;
	}
	// Recursive Case
	if (a[i] == 7) {
		ans = i;
	}
	last7(a,n,i+1,ans);
}
// using global variable
int indx = -1;
void last7_1(int *a, int n, int i) {
	// Base Case
	if (i == n) {
		return ;
	}
	// Recursive Case
	if (a[i] == 7) {
		indx = i;
	}
	last7_1(a,n,i+1);
}
// finding last7 from last index
int last7_2(int *a, int n) {
	// Base Case
	if(n == 0) {
		return -1;
	}
	// Recursive Case
	if (a[n-1] == 7) {
		return n-1;
	}
	return last7_2(a, n-1);
}

int last7_3(int *a, int n, int i) {
	// Base Case
	if (i == n) {
		return -1;
	}
	// Recursive Case
	if (a[i] == 7) {
		int chota_i = i;
		int indx = last7_3(a, n, i+1);
		if (indx == -1) {
			return chota_i;
		}
		else {
			return indx;
		}
	}
	else {
		int indx = last7_3(a,n,i+1);
		return indx;
	}
}
int main () {
	int a[] = {6,8,7,5,3,2,7,8,9,7,5,6,7,7,7};
	int n = sizeof(a)/sizeof(int);
	
	if (Check7(a, n, 0)) {
		cout << "7 present" << endl;
	}
	else{
		cout << "7 not present" << endl;
	}
	cout << "first index of 7: " << first7(a,n,0) << endl;

	int ans = -1;
	last7(a,n,0,ans);
	cout << "Last index of 7: " << ans << endl;

	last7_1(a,n,0);
	cout << "Last index of 7: " << indx << endl;

	cout << "Last index of 7: " << last7_2(a, n) << endl;
	cout << "Last index of 7: " << last7_3(a, n, 0) << endl;


	return 0;
}