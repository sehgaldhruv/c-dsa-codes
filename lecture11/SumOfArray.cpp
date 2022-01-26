#include <iostream>
using namespace std;
int sum (int *a, int n, int i)
{
	if (i == n-1)
	{
		return a[i];
	}
	return a[i]+sum(a,n,i+1);
}
int main () {
	int n, a[1000], i=0;
	cin >> n;
	for (int k = 0; k < n; k++)
	{
		cin >> a[k];
	}
	cout << sum(a,n,i);

	return 0;
}