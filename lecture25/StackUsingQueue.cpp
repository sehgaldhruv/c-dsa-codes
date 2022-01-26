#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q1;
	queue<int> q2;
public:
	void push(int data) {
		if (q1.empty() and q2.empty()) {
			q1.push(data);
		}
		else if (!q1.empty() and q2.empty()) {
			q1.push(data);
		}
		else {
			q2.push(data);
		}
	}

	int top() {
		if (!q1.empty() and q2.empty()) {
			// q1 ke n-1 elements uthar
		}
	}
}