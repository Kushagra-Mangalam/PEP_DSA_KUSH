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

node *delhead(node *head){
	if (head==NULL)return NULL;
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	else {
		node *temp=head;
		head=head->next;
		head->prev=NULL;
		delete temp;
		retun head;
	}
}

int main(){
	node *head=new node(10);
	node *temp1=new node(20);
	node *temp2=new node(30);
	head->next=temp1;
	temp1->prev=head;
}
