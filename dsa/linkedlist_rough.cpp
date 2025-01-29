#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
	node (int data){
		this->data=data;
		this->next=NULL;
	}
};

void insertathead(node * &head,int d){
	node *temp=new node(d);
	temp->next=head;
	head=temp;
}

void insertatposition(node * &head,int position,int d){
	node * temp =  head;
	int cnt=1;
	
	while (cnt<position-1){
		temp = temp->next;
		cnt++;
	}
	
	node * nodetoinsert=new node (d);
	
	nodetoinsert ->next =temp ->next;
	
	temp-> next=nodetoinsert ;
}
void printlist(node * &head){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
//	node * a=new node(8);
	node * head=NULL;
	insertathead(head,10);
	insertathead(head,12);
	insertathead(head,13);
	printlist(head);
	cout<<endl; 
	insertatposition(head,3,22);
	
	printlist(head);
}
/*
#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node(int data){
			this->data=data;
			this->next= NULL ;
		}
};

/*void insertathead(node * &head,int d){
	
	node *temp=new node(d); 
	temp->next=head;
	head=temp;
}
void insertattail(node * &tail,int  d){
	node *temp=new node (d);
	tail->next=temp;
	tail=temp;
}

void printlist(node * &head){
	node * temp=head;
	while (temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	} 
}

int main(){
	node * node1=new node(10);
//	cout<< node1->data<<endl;
//	cout<< node1->next<<endl;
	node *head=node1;
	node *tail=node1;
	printlist(head);
	
	cout<<endl;
	
//	insertathead(head,12);
	insertattail(tail,12);
	printlist(head);
	
}*/
