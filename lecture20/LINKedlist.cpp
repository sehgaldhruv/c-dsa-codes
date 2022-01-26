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
	node*n=new node(data);
	n->next =head;
	head=n;
}


}
int length(node * head){
	int cnt = 0;
	while(head){
		cnt++;
		head = head->next;
	}
	return cnt;
}
void insertatend(node* &head, int data){
	node*n = new node(data);
	if(head==NULL){
		//WE INSERT AT 1ST NODE
		head=n;

	}
else{
	//we have linkedlist
	node*temp =head;
	while (temp->next){
		temp = temp ->next;

	}
	temp -> next= n;
}
}
void insertatmid(node* &head, node* tail, int data, int pos)
{
if(pos==0){
	insertatbegin(head, tail, data);

}
else{
	node* temp=head;
	for(int i=0; i<pos-1; ++i){
		temp=temp->next;

	}
	node* n =new node(data);
	n->next=temp->next;
	temp->next=n;
}


}

	void printll(node* head){
	while(head){
		cout<<head->data<<"-->";
		head= head->next;
	}
	cout<<"NULL"<<endl;
}
void deleteatbegin(node* &head, node* &tail){
	if(head==NULL){
		return;

	}
	else if(head->next ==NULL){
		delete head;
		head=tail=NULL;
	}
	else{
		node* temp = head;
		while(temp->next != tail){
			temp = temp->next;

		}
		delete tail;
		tail = temp;
		tail->next = NULL;


	}
}
int main(){
	node* head, *tail;
	head = tail = NULL;
	insertatbegin(head,tail,1);
	insertatbegin(head,tail,2);
	insertatbegin(head,tail,3);
printll(head);
insertatmid(head,tail,13,1);
printll(head);
cout<<length(head)<<endl;
deleteatbegin(head, tail);
printll(head);

	return 0;


}