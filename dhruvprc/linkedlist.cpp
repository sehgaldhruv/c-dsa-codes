#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
node(int d){
data = d;
next = NULL;
}
};	
void insertatbegin(node* &head, node* &tail, int data){
	if(head==NULL){
		node* n=new node(data);
		head=tail=n;

	}
else{
	node*n = new node(data);
	n->next=head;
	head=n;

}
}
void insertatend(node* &head, node* &tail, int data){
if(head==NULL){
	node *n = new node(data);
	head=tail=n;

}
else{
	node* n=new node (data);
		tail->next= n;
		tail=n;

	}
}

void length(node* head){
	int cnt=0;
	while(head){
		cnt++;
		head= head->next;
	}
	return cnt;
}
void printll(node* head){

while(head != NULL){
	cout<<head->data<<"-->";
	head=head->next;
}
cout<<"NULL"<<endl;

}


void deleteatend(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}
	else{
		node* temp= head;
		while(temp->next!=tail){
			temp=temp->next;

		}
		delete tail;
		tail=temp;
		tail->next=NULL;
	}
}
void revll(node* &head, node* &tail )
{
	node*c =head;
	node*p=NULL;
	node*n;
	while(c!=NULL){
		n=c->next;
		c->next=p;
		p=c;
		c=n;
	}
	head=p;
}

// void deleteatmid(node* &head, node* &tail, int data, int pos ){

// if(head==NULL){
// 	return;

// }
// else if(head->next==NULL){
// 	head=tail=NULL;
// 	return;
// }
// else{
// 	node* tail=head;
//  for(int i=1; i<pos; i++){
//  	temp=nemp->next;

//  }
//  node*n= temp->next;
//  temp->next=n->temp;
//  delete n;
// }

//}

node* searchrec(node*head, int key){
	//base case
	if(!head){
		return NULL;
	}
	//RECURSIVE CASE
	if(head->data==key){
		return head;

	}
	return searchrec(head->next, key);
}

node*mid(node* head){
	if(!head){
		return head;

	}
	node*fast=head->next;
	node*slow= head;
	while(fast!=NULL and fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;


	}
	return slow;

}
// node*mid(node* head){
// 	if(!head){
// 		return head;

// 	}
// 	node* fast= head->next;
// 	node* slow = head;
// 	while(fast!=NULL and fast->next!=NULL){
// 		fast=fast->next->next;
// 		slow=head->next;

// 	}
// 	return slow;
// }
void bubsort(node* &head){
	int len= length(head);
	node* c, *p, *n;
	for(int i=1; i<=len-1; i++){
		c=head; prev=NULL;
		while(c!=NULL and c->next!=0){
			n=c->next;
			if(c->data>n->data){
				//swaping hogi
				if(prev==NULL){
					//HEAD CHANG HOGA
					c->next = n->next;
					n->next=c;
					prev= head= n;
				}
				else{
					//head change nhi hoga
					c->next = n->next;
					n->next=c;
					prev->next=n;
					prev = n;
				}
			}
			else{
				//swaping nhi hogi 
				prev=c;
				c->next=n;

			}
		}
	}

}
nord* mergeSorted(node* ha, node* hb) {
	// Base Case


	// Recursive Case
	node* nH = NULL;
	if (ha->data < hb->data) {
		nH = ha;
		nH->next = mergeSorted(ha->next, hb);
		return nH;
	}
	else {
		nH = nb;
		nH->next = mergeSorted(ha, hb->next);
		return nH;
	}
}

node* mergesort(node* head) {
	// Base Case
	if (head == NULL || head->next == NULL) {
		return head;
	} 

	// Recursive Case
	// 1. divide
	node* m = midLL(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL:

	// 2. Sort
	a = mergesort(a);
	b = mergesort(b);

	// 3. Merge
	node* nH = mergeSortedLists(a,b);
	return nH;
}
void breakcycle(node* fast, node* head) {
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
	if(head == NULL) {
		return false;
	}
}
int main(){

node* head; node*tail;
head = tail = head1 = tail1 = NULL;
insertatend(head, tail, 1);
insertatend(head,tail, 60);
insertatend(head, tail, 12);
insertatend(head, tail, 4);
insertatend(head, tail, 8);

//insertatend(head, tail, 6);

printll(head);
// while(head){
// deleteatend(head,tail);


// printll(head);
// }
// revll(head,tail);
// printll(head);
// node* ans=searchrec(head, 4);
// cout<<ans->data<<endl;
// node*m=mid(head);
// cout<<m->data;
bubsort(head);
printll(head);
printLL(head1)
node* nH = mergeSorted(head, head1);
printLL(nH);

// node* ans = midLL(head);

cout<<endl;
return 0;
}