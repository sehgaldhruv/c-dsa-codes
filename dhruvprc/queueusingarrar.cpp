#include<iostream>
using namespace std;

class Queue{
	int *a;
	int n;
	int cs;
	int f;
	int e;
public:
	Queue(int s=5){
		cs=0;
		n=s;
		a=new int[n];
		 f=0;
		e=n-1;
	}
	void push(int data){
		if(cs<n){
		e=(e+1)%n;
		a[e]=data;
		cs++;
	}
	else{
		//queue overflow
		
		cout<<"queue overflow";

	}
	}
	void pop(){
		if(cs>0){
			f=(f+1)%n;
			cs--;
		}
		else{
			cout<<"queue underflow";
		}
	}
	bool empty(){
		return cs==0;//0==0(true), 4==0(false)
	}
	int front(){
		return a[f];
	}
};
int main(){
Queue q;
q.push(1);
q.push(2);
q.push(3);
while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}
	return 0;

}