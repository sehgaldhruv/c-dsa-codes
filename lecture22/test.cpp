#include <iostream>
using namespace std;

class node {
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
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void deleteAtBegin(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}
void insertAtMid(node* &head, node* &tail, int data, int pos) {
	if (pos == 0) {
		insertAtBegin(head, tail, data);
	}
	else if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos-1; ++i)
		{
			temp = temp->next;
		}

		node* n = new node 
	}
}