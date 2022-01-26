#include <iostream>
using namespace std;

int main () {
	int n , i = 2;
   cin >> n;

   i = 2;
   while (i <= n-1) {
   	if (n % i == 0) {
   		cout << "Not Prime" << endl;
   		return 0;
   	}
   	i++;
   }
   cout << "Prime" << endl;
   return 0;
}
	