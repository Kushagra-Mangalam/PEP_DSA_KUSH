#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node {
    int data ;
    node *left ;
    node *right;
};

node * createnode (int data){
    node * newnode=new node();
    newnode ->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

node *insertnode(node* root,int data){
    if (root==NULL){
        return createnode(data);
    }
    if (data<root->data){
        root->left=insertnode(root->left,data);
    }
    else {
        root->right=insertnode(root->right,data);
    }
    return root;
}


void preordertraversal(node * root){
    if (root!=NULL){
        cout<<root->data<<" ";
        preordertraversal(root->left);
        preordertraversal(root->right);
    }
}

int main(){
    node * root=NULL;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        root=insertnode(root,data);
    } 
    
    preordertraversal(root);
    return 0;
}
