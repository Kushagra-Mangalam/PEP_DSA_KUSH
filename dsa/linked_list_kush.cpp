#include<iostream>
#include<cstdlib>

using namespace std;

struct node {
	int data;
	struct node * next;
};
struct node *head = NULL;

void traversal (struct node *ptr){
	cout<<"following data are:";
	while (ptr!=NULL){
		cout<<ptr->data<<"\t";
		ptr=ptr->next;
	}
}

struct node *insertatbegin(struct node *head,int data){
	 struct node *ptr;
	 ptr=(struct node *) malloc(sizeof (struct node));
	 ptr->next=head;
	 ptr->data=data;
	 
	 return ptr;
}

//void insertion(int d)
//{
//	struct node *newnode; 
//	newnode= (struct node *) malloc(sizeof (struct node));
//	newnode -> data = d
//	newnode->next=head;
//	head=newnode;
//}


int main ()
{
    int choice ;
    cout << "Enter  how many  data : " ;
    cin  >> choice ;
    struct node *head = NULL; 
    struct node *temp = NULL; 
    int i;
    for  (i=0;i<choice;i++)
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter data:" ;
        cin >> newnode->data;

        if (head == NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else {
            newnode->next=NULL ; 
            temp->next=newnode;
            temp = newnode;
        }
        
    }
    
    traversal(head);
    
    //inerstion
    
//    struct node *newnode;
//    newnode=(struct node*)malloc (sizeof(struct node));
//    cout<<"enter new node :";
//    cin>>newnode->data;
//    newnode->next=head;
//    head=newnode;
    int d;
    cout<<"::::";
    cin >> d ;
    
	head=insertatbegin(head,d);
    traversal(head);
}
