#include <iostream>
using namespace std;


template<typename U>
class node {
public:
		U data;
		node<U>* next;
		node(u d) {
				data = d;
				next = NULL;
		}	

};

template<typename T>
class stack {
	node<T>* head;
public:
		stack() {
			head = NULL;
		}

		void push(T d) {
			if (!head) {
					node<T>* n = new node<T>(d);
					head = n;
			}
			else {
					node<T>* n = new node<T>(d);
					n->next = head;
					head = n;
			}
		}
		void pop() {
			if (!head) {
				return;
			}
			node<T>* n = head;
			head = head->next;
			delete n;
		}
		bool empty() {
			return head == NULL; // NULL == NULL : true, address == NULL : false
		}
		T top() {
			return head->data;
		}
};

int main () {
	stack<int> s;
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	//s.push(1);
	//s.push(2);
	//s.push(3);
	//s.push(4);

	while (s.empty() != true) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}