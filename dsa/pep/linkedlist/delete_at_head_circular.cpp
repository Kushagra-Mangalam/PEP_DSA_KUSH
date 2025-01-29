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

void delhead(node* &head){
    node* del=head;
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    head=del->next;
    delete(del);
}

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
    display(head);
    delhead(head);
    cout<<endl;
    display(head);
  //  reverse(head);
}