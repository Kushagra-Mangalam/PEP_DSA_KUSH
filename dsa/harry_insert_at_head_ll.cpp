#include<iostream>
#include <cstdlib>
using namespace std;

struct node {
	int data;
	struct node *next;
};
struct node * insertatbegin(struct node *head, int data){
	 struct node * ptr;
	 ptr=(struct node *) malloc(sizeof (struct node));
	 
	 
	 ptr->next=head;
	 ptr->data=data;
	 
	 
	// ptr=head;
	 return ptr ;
}

struct node * insertatindex(struct node *head,int data,int index){
	struct node * ptr;
	 ptr=(struct node *) malloc(sizeof (struct node));
	 struct node *p=head;
	 int i=0;
	 
	 
	 while (i!=index-1){
	 	p=p->next;
	 	i++;
	 }
	 
	 
	 ptr->data=data;
	 ptr->next=p->next;
	p->next=ptr;
	
	
	return head;
}

struct node * insertatnode(struct node * prevnode, struct node *head, int data){
	struct node * ptr;
	ptr=(struct node * )malloc (sizeof (struct node));
	
	ptr->next=prevnode->next;
	prevnode->next=ptr;
	
	return head;
}

struct node * insertatend(struct node * head,int data){
	struct node *ptr;
	ptr=(struct node *) malloc (sizeof(struct node ));
	struct node *p;
	p=head;
	ptr->data=data;
	
	
	while (p->next!=NULL){
		p=p->next;
	}
	
	
	p->next=ptr;
	ptr->next=NULL;
	
	
	return head;
}
void printlist(struct node *ptr){
	while (ptr!=NULL){
		cout<<ptr->data<<"\t";
		
		ptr=ptr->next;
	}
}
int main(){
	//this is normal intialization 
	struct node *head;
	struct node *second;
	struct node *third;
	
	//allocate memory for node in the linked list in heap
	head=(struct node *) malloc (sizeof(struct node ));
	second = (struct node *) malloc (sizeof(struct node ));
	third=(struct node *) malloc (sizeof(struct node ));
	
	//linked first and second nodes
	head->data=7;
	head->next=second;
	
	//linked second  and third nodes
	second->data=11;
  	second->next=third;
	
	//terminate the list at the third node 
	third->data=15;
	third->next=NULL;
	
	printlist(head);
	cout<<"\n";
	head=insertatbegin(head, 66);
	printlist (head);
	cout<<"\n";
	head=insertatindex(head,77,1);
	printlist(head);
	cout<<"\n";
	head=insertatend(head,43);
	printlist(head);
	
	return 0;
}
