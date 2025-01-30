#include<bits/stdc++.h>
using namespace std;

class node {
  public:
  int key;
  node *left;
  node *right;
  int height;
};

int height (node *n){
    if (n=NULL)
    return 0;
    return n->height;
}

int max(int a,int b){
    return (a>b)? a : b;
}

node * newnode (int key){
    node *node =new node();
    node -> key=key;
    node->left =NULL;
    node-> right =NULL;
    node -> height =1;
    
    return (node);
}


node *rightrotate(node *y){
    node *x=y->left;
    node *t2=x->right;
    
    x->right =y;
    y->left=t2;
    
    y->height =max(height(y->left),height(y->right))+1;
    
    x->height =max(height(x->left),height(x->right))+1;
    
    return x;
} 


node *leftrotate(node *x){
    node *y=x->right;
    node *t2=y->left;
    
    
    y->left=x;
    x->right=t2;
    
    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;
    
    return y;

}

int getbalance(node *n){
    if (n==NULL)
    return 0;
    return height(n->left)-height(n->right);
}

node * insert (node * node ,int key){
    if (node ==NULL)
    return (newnode (key));
    
    if (key<node ->key)
    node -> left=insert(node ->left,key);
    
    else if (key> node ->key)
    node ->right =insert(node ->right,key);
    
    else 
    return node ;
    
    
    node ->height=1+ max(height(node->left),height (node->right));
    
    int balance =getbalance(node);
    
    if (balance >1 && key < node ->left->key)
    return rightrotate(node);
    
    if (balance <-1 && key >node ->right->key)
    return leftrotate(node);
    
    if (balance > 1&& key >node -> left -> key){
        node -> left = leftrotate(node -> left);
        return rightrotate(node);
    }
    
    if (balance <-1 && key < node -> right ->key){
        node -> right =rightrotate(node )
        return  leftrotate(node);
    }
        return node ;
}

void preorder (node * root){
    if (root!=NULL){
        cout<<root->key<<" ";
        preorder(root->key);
        preorder(root->right);
    }
}

int main(){
    node *root=NULL;
    
    root =insert (root,10);
    root =insert (root,20);
    root =insert (root,30);
    root =insert (root,40);
    root =insert (root,50);
    root =insert (root,25);
    
    cout<<"preorder traversal of the constructed AVL tree is \n";
    
    preorder (root);
    
    return 0;
}

