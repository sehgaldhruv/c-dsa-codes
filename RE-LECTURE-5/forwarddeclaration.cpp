#include <iostream>
using namespace std;

//void HelloWorld():Function Declaration
void HelloWorld(); //Forward Declaration
void Addition(int a, int y);
void Addition2(int, int);

int main() {
	// cout << "Hello world" << endl;
	HelloWorld(); //Calling , Invoke
	Addition(10, 20);
	Addition2(20, 30);
	return 0;
}

void HelloWorld() {  //function definition
	cout << "Hello World" << endl;
}

void Addition(int a, int b) {
	cout << "sum is " << a+b << endl;
}

void Addition2(int x, int y) {
	cout << "Again sum is " << x+y << endl;
}
