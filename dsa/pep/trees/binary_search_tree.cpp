#include<iostream>
using namespace std;

class node{
    public :
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insertnode(node* root , int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertnode(root->left,val);
    }
    else{
        root->right=insertnode(root->right,val);
    }
    return root; /* iska matlab hai ki hamesha main root ke pass call ho jayega node*/
}

void display(node* root){
    if(root==NULL){
        return ;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main(){
    node* root=NULL;
    int n;
    cout<<"enter number of nodes:";
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cout<<"enter value:" ;
        cin>>val;
        root=insertnode(root,val);
    }
    display(root);
}
