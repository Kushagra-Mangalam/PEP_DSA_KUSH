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

void preordertraversal(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void inordertraversal(node* root){
    if(root==NULL){
        return ;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

void postordertraversal(node* root){
    if(root==NULL){
        return ;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}

node* buildtree(node* root){
    cout<<"enter data:";
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    root=new node(data);

    cout<<"enter data for left child :"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for right child:"<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}


int main(){
    node* root=NULL;
    root=buildtree(root);
    cout<<endl;
    cout<<"preorder traversal: ";
    preordertraversal(root);
    cout<<endl<<"inorder traversal: ";
    inordertraversal(root);

    cout<<endl<<"post order traversal: ";
    postordertraversal(root);
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
     
}