#include <iostream>
using namespace std;

int main () {
    char ch;
    int x;

    cin >> ch;

    x = ch;

    cout << "char:" << ch << ", ASCII code:" << x << endl;
    if (x >= 65 && x <= 90) {
        cout << "Upper Case" << endl;
    }
    else {
        cout << "Lower Case" << endl;
    }

    if (ch >= 'A' && ch <= 'z')

    return 0;
}
