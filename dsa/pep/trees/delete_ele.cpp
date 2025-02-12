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

node* del(node* root1 , int key){
    node* root=search(root1,key);

    if(root==NULL){
        return root;
    }
    if(root->data==key){
        if(root->left!=NULL && root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        if(root->left!=NULL && root->right!=NULL){
            int minval=maxvalue(root->left)->data;
            root->data=minval;
            root->left=del(root->left,minval);
            return root;
        }
    }
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
    int key;
    cout<<"enter key to delete:";
    cin>>key;
    del(root,key);
    display(root);
    //25,20,30,10,22,27,35,5,12,24,26,28,40
}