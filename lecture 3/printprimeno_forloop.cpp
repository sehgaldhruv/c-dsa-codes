#include <iostream>
using namespace std;
int main () {
    int no , n;
    cin >> n;

    for(no = 2 ; no <= n ; no++) {
        int i = 2;
        while(i <= no-1) {
            if (no%i == 0) {
                //not a prime number
                break;
            }

            i++;

        }

        if (i == no) {
            // cout << "Prime number : "<<no<<endl;
            cout << no << ' ';


        }

    }

    return 0;


   }
