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
    }
    else {
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

}

void reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* nextnode=NULL;

    while(curr!=NULL){
        nextnode=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nextnode;
    }
    head=prev;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
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

    reverse(head);
    display(head);
}