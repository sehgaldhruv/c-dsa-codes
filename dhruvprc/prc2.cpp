#include<iostream>
using namespace std;

class node {
public:
	int data;
	node * next;
	node(int d){
		data d;
		next = NULL;
	}
};

int lengthll(node* head){
	int count =0; 
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

void insertatbegning(node* &head, node* &tail, int data){
	if(head==NULL){
		node*n =new node(data);
		head=tail=n;
	}
	else{
		node* n = new node(data);
	
	n->next=head;
	head=n;
}
}

void insertatend(node* &head, node* &tail, int data){
	if(head==NULL){
		node* n=new node(data);
		head=tail=n;
	}
	else{
		node*n =new node(data);
		tail->next=n;
		tail=n;

	}
}
void deleteatbegin(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}
	else{
		node* temp=head;
		head=head->next;
		delete temp;
	}
}
void deleteatend(node* &head, node* &temp){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}
	else{
		node*temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		temp->next=NULL;
		tail=temp;
	}

}
void deleteatmid(node* &head, node* &temp, int pos){
	if(pos==0){
		deleteatbegin(head,tail);

	}
	else if(pos>=lengthll(head)-1){
		deleteatend(head,tail);
	}
	else {
		node* temp=head;
		for(int i=0; i<pos-1;++i){
			temp=temp->next;
		}
		node* n=temp->next;
		temp->next=n->next;
		delete n;
	}
}
void insertatmid(node* &head, node* &tail, int data, int pos){
	if(pos==0){
		insertatbegning(head,tail,data);
	}
	else if(pos>=lengthll(head)){
		insertatend(head,taul,data);
	}
	else{
		node*temp =head;
		for(int i=0; i<pos-1; i++){
			tem=temp->next;
		}
		node*n= new node(data);
		n->next=temp->next;
		temp->next->n;

	}
}
void printll(node* head){
	while(head){
		cout<<head->data<<"-->";
		head= head->next;
	}
	cout<<"NULL"<<endl;
}
bool searchiterativell(node* head, int key){
	while(head){
		if(head->data==key){
			return true;
		}
		head=head->next;
	}
	return false;

	}
bool iskeypresent(node* head, int key){
	while(head){
		if(head->data==key){
			return true;
		}
		head=head->next;
	}
	return false;
}
node *searchrecursivell(node* head, int key){
	//base case
	if(!head){
		return NULL;
	}
	//RECURSIVE CASE
	if(head->data==key){
		return true;
	}
	node* baakimeihaikya = searchrecursivell(head->next,key);
	return baakimeihaikya;
}
node* midll(node* head){
	if(heal==NULL){
		return NULL;
	}
	if(head->next==NULL){
		return head;

	}
	node* s=head;
	node* f=head->next;
	while(f!=NULL and f->next!=NULL){
		f=f->next->next;
		s=s->next;
	}
	return s;
}
// void reversell(node* &head, node* &tail){
// 	node* c=head;
// 	node* p=NULL;
// 	node* n;
// 	while(c !=NULL){
// 		n=c->next;
// 		c->next=p;
// 		p
// 	}
// }
node* mergesortedlist(node* ha, node*hb){
	//base case
	if(ha==NULL){
		return ha;
	}
	if(hb==NULL){
		return hb;
	}
	//recursive case
	node* nh=NULL;
	if(ha->data<hb->data){
		nh=ha;
		nh->next=mergesortedlist(ha->next,hb);
		return nh;
	}
	else{
		nh=hb;
		nh->next=mergesortedlist(ha,hb->next);
		return nh;
	}
}
