#include <iostream>
using namespace std;
 int main () {
     int N, i, no, n;
     bool isprime;

     cin >> n;

     no = 2;
     while (no<=n) {
        isprime = true;
        i = 2;

        while (i<= no-1) {
            if (no%i==0) {
                isprime = false;
            }

            i = i + 1;
        }
         no = no + 1;
     }

     cout << endl;

     return 0;
     }
