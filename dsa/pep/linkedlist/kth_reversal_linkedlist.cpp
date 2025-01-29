// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int da){
//         data=da;
//         next=NULL;
//     }
// };

// void insert(node* &head,int data){
//     node* n = new node(data);
//     node* temp=head;
//     if(head==NULL){
//         head=n;
//     }
//     else {
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=n;
//     }

// }


// void kreverse(node* &head, int k){
//     node* prev=NULL;
//     node* curr=head;
//     node* nextnode=NULL;

//     if(curr!=NULL){
//     int count=1;
//     while(count!=k){
//         prev=curr;
//         nextnode=curr->next;
//         curr=nextnode;
//        //nextnode=curr->next;   
//        count++;
//     }
//     curr->next=prev;
    
//     kreverse(curr->next,k);
//     }
//     head=prev;
// }

// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data;
//         temp=temp->next;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the size of linked list:";
//     cin>>n;
//     int data;
//     node* head=NULL;
//     for(int i =0;i<n;i++){
//         cin>>data;
//         insert(head,data);
//     }
//     int k;
//     cout<<"enter k element:";
//     cin>>k;
//     kreverse(head,k);
//   //  reverse(head);
//     display(head);
// }

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int da) {
        data = da;
        next = NULL;
    }
};

// Function to insert a new node at the end of the linked list
void insert(node*& head, int data) {
    node* n = new node(data);
    if (head == NULL) {
        head = n;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}

// Function to reverse the linked list in groups of size k
node* kreverse(node* head, int k) {
    // Base case: If the linked list is empty or k is 1, no reversal is needed
    if (head == NULL || k == 1) {
        return head;
    }

    node* prev = NULL;
    node* curr = head;
    node* nextnode = NULL;
    int count = 0;

    // Reverse the first k nodes of the list
    while (curr != NULL && count < k) {
        nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
        count++;
    }

    // Recursively reverse the remaining list and connect it to the current segment
    if (nextnode != NULL) {
        head->next = kreverse(nextnode, k);
    }

    // Return the new head of the reversed list
    return prev;
}

// Function to display the linked list
void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of linked list: ";
    cin >> n;

    int data;
    node* head = NULL;
    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert(head, data);
    }

    int k;
    cout << "Enter k (group size for reversal): ";
    cin >> k;

    head = kreverse(head, k); // Reverse the list in groups of size k
    cout << "Reversed linked list: ";
    display(head); // Display the reversed list

    return 0;
}
