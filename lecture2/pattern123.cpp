#include <iostream>
using namespace std;

int main () {
 int n,no;
 int row , col;

 cin >> n;
 row = 1;    //initi
 while (row <= n) {
    col = 1;  //initi
    while (col <=n) {
    cout<< no << " ";

    no = no + 1;
    col = col + 1;
    }

    cout << '\n';
    row = row + 1;
    }

    return 0;

   }


