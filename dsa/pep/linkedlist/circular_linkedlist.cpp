#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int da){
        data=da;
        next=NULL;
    }
};

void insert(node* &head,int data){
    node* n = new node(data);
    node* temp=head;
    if(head==NULL){
        head=n;
        n->next=head;
    }
    else {
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=n;
        n->next=head;
    }

}

void loopstart(node* &head,node* intersection){
    node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    cout<<"loop start from:"<<slow->data<<endl;
}

void loopde(node* &head){
    node* slow=head;
    node* fast=head;
    int flag=0;
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag=1;
            loopstart(head,slow);
            break;
        }else if(fast==NULL){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"there is loop in linked list";
    }else{
        cout<<"there is no loop";
    }
}

// void reverse(node* &head){
//     node* prev=NULL;
//     node* curr=head;
//     node* nextnode=NULL;

//     while(curr!=NULL){
//         nextnode=curr->next;
//         curr->next=prev;

//         prev=curr;
//         curr=nextnode;
//     }
//     head=prev;
// }

void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    
    }while(temp!=head);
}
int main(){
    int n;
    cout<<"enter the size of linked list:";
    cin>>n;
    int data;
    node* head=NULL;
    for(int i =0;i<n;i++){
        cin>>data;
        insert(head,data);
    }
    loopde(head);
    cout<<endl;
    display(head);

  //  reverse(head);
}