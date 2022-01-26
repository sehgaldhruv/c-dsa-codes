#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d): data(d), left(NULL),right(NULL){}
};

node* creattree(){
	//base case
	int data;
	cin>>data;
	if(data==NULL){
		return NULL;
	}
	else{
		node*root=new node(data);
		root->left=creattree();
		root->right=creattree();
	return root;
	}
}
void preorder(node* root){
	//base case
	if(root==NULL){
		return;
	}
	//recursive case
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}
void inorder(node* root){
	//base case

	if(root==NULL){
		return;
	}
	//recursive case
	inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
void postorder(node* root){
	//base case
	if(root==NULL){
		return;
	}
	//recursive case
	postorde(root->left);
	postorder(root->right);
	cout<<root->data<<" ";


}
int countnodes(node* root){
	//base case 
	if (root==NULL){
		return 0;
	}
	//recursive case
	return countnodes(root->left)+ countnodes(root->right)+1;

}
int height(node*root){
	//base case
	if(root==NULL){
		return 0;
	}
	int left_height=height(root->left);
	int right_height=height(root->right);
	return max(left_height, right_height)+1;

}
int diameter(node* root){
	
}