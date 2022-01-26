#include <iostream>
using namespace std;
void HelloWorld() {
	cout << "Hello World" << endl;
}
void IsEven(int n) {
	if(n%2 == 0) {
		cout << "Even" << endl;
	}
	else {
		cout << "Odd" << endl;
	}
}

int main () {

	HelloWorld() ; // Calling or Invoking 
	cout << "We are inside main" << endl;

	int n = 6;
	IsEven(n);   // Invoking or Calling

	return 0;
}