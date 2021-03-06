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
		  	head = n;
	}
}

void insertAtEnd(node* &head, node* &tail, int data) {
	if (head == NULL) {
		node* n = new node(data);
		head = tail = n;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

node* midLL(node* head) {
	if (head == NULL) {
		return NULL;
	}
	if (head->next == NULL) {
		return head;
	}

	node* s = head;
	node* f = head->next;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}
	return s;
}

node* mergeSortedLists(node* ha, node* hb) {
	// Base Case
	if (ha == NULL) {
		return hb;
	}
	if (hb == NULL) {
		return ha;
	}
	// Recursive Case
	node* nH = NULL;
	if (ha->data < hb->data) {
		nH = ha;
		nH->next = mergeSortedLists(ha->next, hb);
		return nH;
	}
	else{
		nH = hb;
		nH -> next = mergeSortedLists(ha, hb->next);
		return nH;
	}
}

node* mergeSort(node* head) {
	// Base Case
	if (head == NULL || head -> next == NULL) {
		return head;
	} 
	// Recursive Case
	//1. Divide
	node* m = midLL(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;

	//2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	//3. Merge
	node* nH = mergeSortedLists(a,b);
	return nH;
}

void breakCycle(node* fast, node* head) {
	node* slow = head;
	node* p = head;
	while (p->next != fast) {
		p = p->next;
	}

	while (fast != slow) {
		p = fast;
		fast = fast->next;
		slow = slow->next;
	}
	p->next = NULL;
}
bool isCyclic(node* head) {
	if (head == NULL) {
		return false;
	}
	node* fast, * slow;
	fast = slow = head;
	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			breakCycle(fast, head);
			return true;
		}
	}
	return false;
}

int main () {
	node* head, * tail, * head1, *tail1;
	head = tail = head1 = tail1 = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 12);
	tail->next = head->next->next->next;
	// printLL(head);
	if (isCyclic(head) == false) {
		printLL(head);
	}
	else {
		cout << "Cycle is Present!" << endl;
		printLL(head);
	}
	// node* nH = mergeSort(head);
	// printLL(nH);
	// node* ans = midLL(head);

	return 0;
}