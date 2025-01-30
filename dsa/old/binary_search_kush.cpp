#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	
	
	node(int value){
		data=value;
		left=right=NULL;
	}
};
void preorder(node *root){
	if (root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

node *insert(node *root,int value){
	if(root==NULL){
		return new node (value);
	}
	
	if (value<root->data){
		root->left=insert(root->left,value);
		
	}
	else if(value>root->data){
		root->right=insert(root->right,value);
	}
	return root;
}


node *buildtree(){
	node *root=NULL;
	int n, value;
	cout<<"enter the number of elements:";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>value;
		root=insert(root,value);
		
	}
	return root;
}

int main(){
	node * root=buildtree();
	
	cout<<"preorder traversal:";
	preorder(root);
	cout<<endl;
	
	return 0;
}
