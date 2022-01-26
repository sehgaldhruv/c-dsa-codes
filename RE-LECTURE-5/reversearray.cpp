#include <iostream>
using namespace std;
void reverse(int *x, int n)
{
	int rem,reverse=0;
	while (x!=0)
	{
		rem=x%10;
		reverse = reverse*10+rem;
		x=x/10;
	}
	cout << reverse;
}
int 