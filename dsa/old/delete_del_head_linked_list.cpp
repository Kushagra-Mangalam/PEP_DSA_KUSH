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

void printlist(node *head){     // ptr 
	node *curr=head; // remove 
	while(curr!=NULL){   // ptr 
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}


node *delhead(node *head){
	if(head==NULL)return NULL;
	else {
		node *temp=head->next;
		delete (head);
		return temp;
	}
}

int main(){
	node *head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	printlist(head);
	head=delhead(head);
	printlist(head);
	
	return 0;
}

