#include <iostream>
#include <climits>
using namespace std;

int main () {

 int n,i,no,sum,mi,mx;

 cin >> n;

 mi = INT_MAX;
 mx = INT_MIN ;
 sum = 0;
 i = 1;

 while (i <= n) {

    cin >> no;
    if (no > mx) {
        mx = no;
    }
    if (no < mi) {
        mi = no;
    }
    sum = sum + no;

    i + i + 1;
    }

    cout << "Mean : " << sum / n << endl;
    cout << "Maximum :" << mx << endl;
    cout << "Minimum :" << mi << endl;

    return 0;

 }
