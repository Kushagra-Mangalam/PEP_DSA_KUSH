#include<iostream>
using namespace std;
struct node {
	int data ;
	node *next;
	node (int d){
	data = d;
	next=NULL;
	}
};

node *insertpos(node *head,int pos,int data){
	node *temp=new node (data);
	if (pos==1){
		temp->next=head;
		return temp;
	}
	node *curr=head;
	for (int i=0;i<pos-2 && curr!=NULL;i++)
	curr = curr->next;
	if (curr==NULL)
	return head;
	temp->next=curr->next;
	curr->next=temp;
	return head;
}

void printlist (node *head){
	while (head!=NULL){
		cout<<" "<<head->data;
		head=head->next;
	}
	cout<<endl;
}


int main(){
	node *head=new node (10);
	head->next=new node (20);
	head->next->next=new node (30);
	head->next->next->next=new node (40);
	head->next->next->next->next=NULL;
	head=insertpos(head,3,5);
	printlist(head);
	return 0;
}
