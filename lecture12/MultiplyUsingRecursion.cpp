//MultiplyUsingRecursion
#include <iostream>
using namespace std;
int multiply (int a, int b)
{
	if (b == 1)
	{
		return a;
	}
	int ans=a+multiply(a,b-1);
	return ans;
}

int main () {
	cout << multiply(19,78);


}