#include <iostream>
using namespace std;

int main() {
   int i,n;
   cin>>n;

   i=2;
   while (n<=i-1) {
    if (n%i==0) {
        cout<< "Not Prime" <<endl;
        return 0; // stop the program
        }
        i = i + 1;

   }
   cout << "Prime" << endl;
    return 0;
}


