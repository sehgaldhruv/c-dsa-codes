#include <iostream>
using namespace std;

void updateString(string &s) {
	s += ", Learning strings";
}

int main () {
	string s;

	s = "Hello World"; // Assingment
	cout << s << endl;

	updateString(s);

	cout << s << endl;

	return 0;
	
}