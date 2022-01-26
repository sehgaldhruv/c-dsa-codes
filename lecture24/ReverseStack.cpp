#include <iostream>
#include <stack>
using namespace std;

void push_bottom(stack<int> &s, int topElement) {
	//Base Case
	if (s.empty()) {
		s.push(topElement);
		return;
	}

	//Recursive Case
	int top = s.top();
	push_bottom(s, topElement);
	s.push(top);
}

void ReveseStack(stack<int> &s) {
	// Base Case
	if (s.empty()) {
		return;
	}

	// Recursive Case
	int topElement = s.top();
	s.pop();
	ReverseStack(s);
	push_bottom(s, topElement);
}

int main () {

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	ReverseStack(s);
	while (s.empty() != true) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}