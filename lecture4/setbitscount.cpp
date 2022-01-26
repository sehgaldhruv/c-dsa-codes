#include <iostream>
using namespace std;

int main() {

    int n , setbits = 0;
    cin >> n;

    while (n!=0) {
        int rem = n%2;
        if (rem == 1) {
            setbits++;
        }

        n = n/2;

    }
    cout << "setbits: " << setbits << endl;

    return 0;



}
