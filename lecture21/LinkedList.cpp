#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head) {
	int count = 0;
	while (head) {
		count++;
		head = head->next;
	}
	return count;
}

void insertAtBegin(node* &head, node* &tail, int data) {
	if (head == NULL) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void deleteAtBegin(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head ->next == NULL) {
		delete head;
		head = tail = NULL;
	}
}