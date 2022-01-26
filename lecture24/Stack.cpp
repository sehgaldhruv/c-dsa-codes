#include <iostream>
#include <stack>
using namespace std;

int main () {

	// stack<data_type> s; // syntax to create stack
	stack<int> s;// syntax to create stack
	// push
	// top
	// pop
	// empty
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (s.empty() != true) {
		cout << s.top() << endl;
		s.pop();
	}
}