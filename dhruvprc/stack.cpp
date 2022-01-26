#include<iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d){
		data=d;
		next=NULL;
	}
};

class Queue{
	node* head;
	node*tail;
public:
	Queue(){
		head=tail=NULL;
	}
	void push(int d){
		if(head==NULL){
			node* n =new node(d);
			head=tail=n;
		}
		else{
			node*n=new node(d);
			tail->next=n;
			tail=n;
		}

	}
	void pop(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node*n =head;
			head=head->next;
			delete n;
		}
	}

	int front(){
		return head->data;
	}

	bool empty(){
		return head==NULL;
	}

};
int main(){
	Queue q;
	q.push(1);
	q.push(4);
	q.push(2);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}