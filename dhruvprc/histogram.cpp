#include<iostream>
using namespace std;
//8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d): data(d), left(NULL),right(NULL){}
};
node* creattree(){
	//base case
	int data;
	cin>>data;
	//base case
	if(data==-1){
		return NULL;
	}
	else{
		node*root=new node(data);
		root->left=creattree();
		root->right=creattree();
return root;
	}
	//return root;


}
//8 10 -1 -1 9 7 -1 -1 6 -1 -1




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
	//1.left subtree
	inorder(root->left);
	//2.root
	cout<<root->data<<" ";
	//3.right subtree
	inorder(root->right);
}
void postorder(node* root){
	//base case
	if(root==NULL){
		return;

	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int countnodes(node* root){
	//base case
	if(root==NULL){
		return 0;
	}
	//recursive case
	return countnodes(root->left)+ countnodes(root->right)+1;
}
int height(node* root){
	//base case
	if(root==NULL){
		return 0;
	}
	int left_height = height(root->left);
	int right_height=height(root->right);
	return max(left_height, right_height)+1;
}
// int diameter(node* root){
// 	//base case
// 	if(root==NULL){
// 		return 0;
// 	}
// 	//1.diameter is in left subtree
// 	int op1=diameter(root->left);
// 	//2.diameter is in right subtree
// 	int op2=diameter(root->right);
// 	//3.diameter is via root
// 	int op3= height(root->left)+height(root->right);
// 	return  max(op1, max(op2,op3));
// }
int diameter(node* root){
	//base case
	if(root==NULL){
return 0;
	}
	//1.diameter via root
	int op1=height(root->left)+height(root->right);
	//2.diameterin left subtree
	int op2=diameter(root->left);
	//3.diameter right subtree
	int op3=diameter(root->right);
	return max(op1, max(op2,op3));
}
/////////////////////////////fast diameter//////////////
class pair{
public:
	int height;
	int diameter;
};
pair fastdimeter(node* root){
pair p;
	//base case
if(root == NULL){
	p.height =p.diameter = 0;
	return p;
}
	//recursive case
	pair left = fastdimeter(root->left);
	pair right = fastdiameter(root->right);

	p.height=max(left.height,right.height)+1;
	int op1 = left.height+right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	p.diameter=max(op1, max(op2,op3));
	return p;
}
int main(){
node * root = creattree();
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
cout<<"no of nodes"<<countnodes(root);
cout<<endl;
cout<<"height"<<height(root);
cout<<endl;
cout<<"diameter"<<" "<<diameter(root);
cout<<endl;
pair ans = fastdimeter(root);
cout<<"fast height"<<ans.height<<endl;
cout<<"fast diameter"<<ans.diameter<<endl;
return 0;

}