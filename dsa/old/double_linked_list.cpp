#include <iostream>
using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert()
{
    cout << "Enter Data :";
    int d;
    cin >> d;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;

    if (head == NULL)
    {
        head = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
        tail = newnode;
    }
    else
    {
        newnode->prev = tail;
        newnode->next = NULL;
        tail->next = newnode;
        tail=newnode;
    }
}

void beg()
{
    cout << "Enter Data :";
    int d;
    cin >> d;
    struct node *newnode;
    struct node *newnode2 = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->next = head;
    newnode->prev = NULL;
    newnode2->prev = newnode;
    head = newnode;
}

void traversal()
{
    struct node * temp;
    int a;
    cin >> a;
    if (a == 1)
    {
        cout << "Forward : ";
        temp=head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    else 
    {
        cout << "Backward : ";
        temp=tail;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
    }
}


int main()
{
    int n;
    cout << "Enter the no of nodes you want to enter :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        insert();
    }

    cout << "INSERTION AT BEGGINNING : ";
    beg();

    cout << "Traversal (Enter Choice  )" ;
    traversal();
}
