#include <iostream>
using namespace std;
char map[][100] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void solve (int n)
{
	if (n == 0)
	{
		return;
	}
	int last_digit= n%10;
	cout << map[last_digit];
	solve (n/10);
	}	
	int main () {
			int n = 2048;
		solve (n);
		}
	
