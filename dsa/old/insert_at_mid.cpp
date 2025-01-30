#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	public :
	int data;
	node *next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}	
};
void insertatend(node* &tail,int d){
	node* temp=new node(d);
	tail->next=temp;
	tail=temp;
}



void insertatmid(node* &head,int pos,int d){
	node* temp=new node(d);
	node* current=head;
	for(int i=1;i<pos-1 && current != NULL;i++){
		current=current->next;
	}
	if(current==NULL){
		cout<<"invalid position"<<endl;
		return;
	}
	temp->next=current->next;
	current->next=temp;
	
}
void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main(){
	int n,d;
	cout<<"enter a number:";
	cin>>n;
	cin>>d;
	node* node1=new node(d);
	node* head=node1;
	node* tail=node1;
	for(int i=0;i<n-1;i++){
		cin>>d;
		insertatend(tail,d);
	}
	int l,da;
	cout<<"enter a number where you want to insert a number:";
	cin>>l;
	cout<<"enter a number:";
	cin>>da;

	insertatmid(head,l,da);
	print(head);
	
}





