#include <iostream>
using namespace std;

int main () {

    char ch;
    int count = 0;

    ch = cin.get(); // cin >> ch;//initialization

     while (ch!= '$') { // condition check
            count++;

    ch = cin.get(); //cin >> ch; //updation

    }

    cout << "Total Characters" << count << endl;

    return 0;
}
