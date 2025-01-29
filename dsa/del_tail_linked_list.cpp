#include<iostream>
using namespace std;

struct node{
	int data;
	node *prev;
	node *next;
	node(int d){
		data=d;
		prev=NULL;
		next=NULL;
	}
	
};

void printlist(node *head){
	node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}

node *deltail(node *head){
	if (head==NULL)return NULL;
	if (head->next==NULL){
		delete head;
		return NULL;
	}
	node *curr=head;
	while(curr->next->next!=NULL)
		curr=curr->next;
		delete (curr->next);
		curr->next=NULL;
		return head;
	
}

int main(){
	node *head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	printlist(head);
	head=deltail(head);
	printlist(head);
	
	return 0;
}

