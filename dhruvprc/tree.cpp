#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;

	}
};
node * buildtree(){
	int data;
	cin>>data;

	//base case

	if(data==NULL){
		return;
	}
	else
		node *root=new node(data);
	root->left=buildtree();
	root->right=buildtree();
}