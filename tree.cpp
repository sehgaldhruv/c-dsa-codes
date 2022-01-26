#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left= right= NULL;
	}
};
node* creattree(){
	//base case
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}

//recursive case
//if data is valed then creat the root node
node* root = new node(data);
root->left= creattree();
root->right=creattree();
return root;
}
void preorder(node* root){
	//base case 
	if(!root){
		return;

	}
	//recursive case
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}
int height(node* root){
	//base case 
	if(!root){
		return 0;

	}
	//recursive case 
	int left_height= height(root->left);
	int right_height= height(root->right);

	return max(left_height, right_height)+1;
}
int diameter(node *root){
	//base case
	if(!root){
		return 0;

	}
	//recursive case
	//1.diameter is via root node
	int op1= height(root->left)+height(root->right);
	//2.diameter is in lst
	int op2= diameter(root->left);
	//3.diameter is in rst
	int op3= diameter(root->right);
	return max(op1, max(op2,op3));

}
