#include<iostream>
using namespace std;

class node {
public: 
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};
int length(node* head){
	int cnt =0;
	while(head){
		cnt++;
		head=head->next;

	}
	return cnt;

}
int lengthrec(node*head){
	//base case

if(!head){
	return 0;

}
//recursive case
return 1 + lengthrec(head->next);

}
void insertatend(node* & head, node* &tail, int data){
	node*n=new node(data);
	if(head==NULL){
		head=n;
	}
	else{
		//we have linked list
		tail->next=n;
		tail=n;

	}
}
void insertatbegin(node* &head, neode* &tail, int data){
	node* n= new node(data);
	if(head==NULL){
		//we are inserting at 1is node
		head=tail=n;

	}
	else{
		//we have linkedlist
		n->next=head;
		head=n;

	}
}
void insertatmid(node* &head, node* &tail, int data, int pos){
	if(pos==0){
		insertatbegin(head,tail,data);

	}
	else if(pos>=length(head)-1){
		insertatend(head,tail,data);

	}
	else{
		node* temp=head;
		for(int i=1; i<=pos-1; i++){
			temp=temp->next;

		}
		node* n=new node(data);
		n->next=temp->next;
		temp->next=n;

	}

}
void printll(node* head){
	while (head){
		cout<<head->data;
		head=head->next;
	}
	cout<<"NULL"<<endl;
}
void deleteatfront(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
	 delete head;
	 head=tail=NULL;
	}
	else{
		node* n=head;
		head=head->next;
		delete n;
	}
}
void deleteatend(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL)
{
	delete head;
	head=tail=NULL;
}
else
{
	node*temp=head;
	while(temp->next!=tail){
		temp=temp->next;
	}
	delete tail;
	tail=temp;
	temp->next=NULL;

}
}
void deleteatmid(node* &head, node* &tail, int pos){
	if(pos==0){
		deleteatfront(head, tail);

	}
	else if(pos>=length(head)-1){
		deleteatend(head,tail);
	}
	else{
		node*temp=head;
		for(int i=1; i<pos-1; i++){
			temp=temp->next;

		}
		node*n=temp->next;
		temp->next=n->next;
		delete n;
	}
}