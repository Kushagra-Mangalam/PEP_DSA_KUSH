#include<iostream>
#include <cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	
};

void printlist(struct node *ptr){
	while (ptr!=NULL){
	
	cout<<ptr->data<<"\t";
	ptr=ptr->next;
}
}

int main(){
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
	
	return 0;
}
