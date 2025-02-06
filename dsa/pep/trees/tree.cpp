#include<iostream>
#include<queue>

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

node* buildtree(node* root){
    cout<<"enter data:";
    int data;
    cin>>data;

    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter data for left child :"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for right child:"<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}

void levelordertra(node* root){
    /* level order traversal me queue ka use karke solve karte hai 
    */
    queue<node* >q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front(); /* yaha pe har baar temp initialize hoga 
        q ke front pe tabhi hum pehle hi pop kara de rahe hai*/
        
        // cout<<temp->data<<" ";
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            continue;
        }else{
            cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    }

}
int main(){
    node* root=NULL;
    root=buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1 
    cout<<endl;
    levelordertra(root);
}