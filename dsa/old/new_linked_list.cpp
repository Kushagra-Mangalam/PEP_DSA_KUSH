#include<iostream>
#include<bits/stdc++.h>
 using namespace std ;
 
class node{
	public :
		int data;
		node* next;
		
		
		node(int data){
			this -> data = data;
			this ->next = NULL;
		}
};

void insertathead(node* &head,int da){
	node* temp=new node(da);
//	temp->data=da;
	temp-> next=head;
	head=temp;
}

void print(node* &head){
	node* temp =head;
	while (temp!=NULL){
		cout<<temp -> data<<endl;
		
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	
	//node* temp = new node();
//	cout<<node1 -> data<<endl;
//	cout<<node1 -> next<<endl;
int d,n;
cout<<"enter the number of values you want to enter:";
cin>>n;
cin>>d;


    node* node1=new node(d);
	node* head=node1;
for (int i=0;i<n-1;i++){
	cin>>d;
	insertathead(head,d);
}
print(head);
	
}   
