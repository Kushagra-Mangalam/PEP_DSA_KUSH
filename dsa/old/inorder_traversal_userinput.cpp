#include<iostream>
using namespace std;

struct node {
    int data ;
    node *left ;
    node *right;
};

struct node * createnode (int data){
    node * newnode=new struct node();
    newnode ->data=data;
    newnode->left=nullptr;
    newnode->right=nullptr;
    return newnode;
}

struct node *insertnode(struct node* root,int data){
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

void inordertraversal(struct node* root){
    struct node* current =root;
    while (current !=NULL){
        if (current ->left==NULL){
            cout<<current->data<<" ";
            current =current ->right;
        }
        else{
            struct node* pre =current ->left;
            while (pre->right !=NULL && pre->right != current ){
                pre=pre->right;
            }
            if (pre->right==NULL){
                pre->right=current;
                current=current->left;
            }
            else{
                pre->right=NULL;
                cout<<current->data<<" ";
                current=current->right;
            }
        }
    }
}

int main(){
    struct node* root=NULL;
    int n,data;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>data;
        root=insertnode(root,data);
    }

inordertraversal(root);
return 0;
}

