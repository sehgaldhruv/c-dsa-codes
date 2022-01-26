#include <iostream>
#include<queue>
using namespace std;

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

class node {
public:
	int data;
	node* left;
	node* right;

	node(int d) {
		data = d;
		left = right = NULL;
	}
};
node* createTree() {
	// base case
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}
	// recursive case
	// If the data is valid then create
	// the root node
	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();
	return root;
}

void preorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

int CountNodes(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	return CountNodes(root->left) + CountNodes(root->right) + 1;
}

int height(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);

	return max(left_height, right_height) + 1;
}

int Diameter(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	// 1. Diameter is via root node
	int op1 = height(root->left) + height(root->right);
	// 2. Diameter is in LST
	int op2 = Diameter(root->left);
	// 3. Diameter is in RSt
	int op3 = Diameter(root->right);

	return max(op1, max(op2, op3));
}

// FAST DIAMETER
class Pair {
public:
	int diameter;
	int height;
};

Pair fastDiameter(node* root) {
	// base case
	if (!root) {
		Pair p;
		p.height = p.diameter = 0;
		return p;
	}

	// recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;
	// Diameter of bigger tree
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;

	p.diameter = max(op1, max(op2, op3));
	return p;
}
void levelorder(node* root){
	queue<node *>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* f= q.front();
		q.pop();
		if(f!=NULL){
			cout<<f->data;
			if(f->left)q.push(f->left);
			if(f->right)q.push(f->right);
		}
		else{
			cout<<endl;
			if(!q.empty())q.push(NULL);
		}
	}
}
void mirror(node* root){
	//base case
	if(!root){
		return;
	}
	//recursive case
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}
// node* levelorder(node* tree){
// 	int data;
// 	int l,r;
// 	cin>>data;
// 	if(data==-1){
// 		return NULL;

// 	}
// 	node* root = new node(data);
// 	queue<node*>q;
// 	q.push(root);
// 	while(!q.empty()){
// 		node*f=q.front();
// 		q.pop();
// 		cout<<"enter left and right child of:"<<f->data<<":";
// 		cin>>l>>r;
// 		if(l!=-1){
// 			f->left=new node(l);
// 			q.push(f->right);
// 		}
// 	}
// 	return root;
// }
int pre[]={8,10,1,6,4,7,3,14,13};
int in[]={1, 10, 4, 6, 7, 8, 3, 13, 14};
int i=0;
int n=9;
node* maketree(int s, int e){
	//base case
	if(s>e){
		return NULL;
	}
	//recursive case
	int data=pre[i++];
	node* root = new node(data);
	int k=-1;
	for(int j=s; j<=e; j++){
		if(in[j]==data){
			k=j;
			break;
		}
	}
	root->left=maketree(s,k-1);
	root->right=maketree(k+1,e);
return root;
}

int main() {

	int n= sizeof(in)/sizeof(int);
	node* root= maketree(0,n-1);
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	// cout << "Number of nodes: " << CountNodes(root) << endl;
	// cout << "Height of Tree: " << height(root) << endl;
	// cout << "Diameter of Tree: " << Diameter(root) << endl;

	// Pair ans = fastDiameter(root);
	// cout << "Fast Height: " << ans.height << endl;
	// cout << "Fast Diameter: " << ans.diameter << endl;
	//levelorder(root);
	cout<<endl;
	// mirror(root);
	return 0;
}