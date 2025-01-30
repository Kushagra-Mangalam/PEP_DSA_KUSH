#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int data){
			this -> data=data;
			this -> next=NULL;
		}
};

void insertatend(node* &tail,int d){
	node* temp=new node(d);
	//node* head1=tail;
	tail->next=temp;
	//head1->next=NULL;
	tail=temp;
	
}

void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	int d,n;
	cout<<"enter the number of values you want to enter:";
	cin>>n;
	cout<<endl;
	cin>>d;
	node* node1=new node(d);
	node* head=node1;
	node* tail=node1; 
	for(int i=0;i<n-1;i++){
		cin>>d;
		insertatend(tail,d);
	}
	print(head);
	
}
