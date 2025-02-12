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

node* search(node*root , int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return search(root->left,key);
    }
    return search(root->right,key);
}

node* minvalue(node* root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;

}

node* maxvalue(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;        
    }
    return temp;
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
    int key;
    cout<<"enter key to search:";
    cin>>key;
    if(search(root,key)==NULL){
        cout<<"key not found";
    }
    else{
        cout<<"key found";
    }

    int minv=minvalue(root)->data;
    cout<<"min value is:"<<minv<<endl;
    int maxv=maxvalue(root)->data;
    cout<<"max value is:"<<maxv<<endl;
}