#include <iostream>
using namespace std;
int main () {
   int i,n,sum;
   cin >> n;

    sum=0;
    i=1; // initialization
    while (i<= n)  {
            if (i%2==0) {
            cout << i << endl;
            sum = sum + i;
            }
            i = i + 1;
    }
    return 0;

}
