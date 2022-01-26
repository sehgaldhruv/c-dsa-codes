#include <iostream>
#include <vector>
using namespace std;

class node {
public:
	int data;
	node* next; // self referentail class

	node(int d): data(d), next(NULL) {}
};

int length(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head -> next;
	}
	return cnt;
}

void InsertAtEnd(node* &head, int data) {
	node* n = new node(data);
	if (head == NULL) {
		// we are inserting the first node
		head = n;
	}
	else{
		// we have linkedlist
		node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next=n;
	}
}

void PrintLL(node* head) {
	while(head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

/////find mid/////
// without calculating the length
node* mid(node* head) {
	if (!head) {
		return head;
	}
	node* fast = head->next, *slow = head;

	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
///// !find mid////

//// rverse a ll /////
void ReverseLL(node* &head) {
	node* c = head, *prev = NULL, *n;
	while (c) {
		n = c->next;
		c->next = prev;
		prev = c;
		c = n;
	}
	head = prev;
}
////// !reverse //////

///// BUBBLE SORT /////
void bubblesort(nord* &head) {
	int len = length(head);
	node* c, *prev, *n;
	for(int iter = 1; iter <= len-1; iter++) {
		c = head; prev = NULL;
		while(c and c->next) {
			n = c->next;
			if (c->data > n->data) {
				// swapping hogi
				if (prev == NULL) {
					// head change hoga
					c->next = n-> next;
					n->next = c;
					prev = head = n;
				}
				else {
					// head change hoga
					c->next = n->next;
					n->next = c;
					prev->next = n;
					prev = n;
				}
			}
			else{
				// swapping nhi hoga
				prev = c;
				c = n;
			}
		}
	}
}
//// !bubble sort ////

node* merge(node* a, node* b) {
	// base case
	if (a == NULL) {
		
	}
}