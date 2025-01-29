#include<bits/stdc++.h>
using namespace std;

struct node {
	int key;
	struct node *left;
	struct node *right ;
	node (int k){
		key=k;
		left =right =NULL;
	}
};

bool search(node *root , int x){
	if (root ==NULL)
		return false;
	if (root->key==x)
		return true;
	else if (root->key>x){
		return search (root->left ,x);
	}		
	else {
	    return search (root->right,x);
	}
}

int main() {
    node *root =new node (15);
    root ->left=new node (5);
    root->left->left=new node (3);
    root->right =new node (20);
    root->right ->left=new node (18);
    root->right->left->left=new node (16);
    root->right ->right =new node (80);
    int x=16;
    
    if (search (root,x))
    cout <<"found";
    else 
    cout<<"not found";
}
