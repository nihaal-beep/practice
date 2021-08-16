#include <iostream>
using namespace std;
 class node 
 {
    public:
    int data;
    node* next;       // declaring a pointer of class node which will enable us to make new nodes for the singly linked list 
    node()
    {
        next = NULL;
        data = 0;
    }
    
 };

void insert_end(node* &head, int num ) 
{
    node* insert = new node(); //creating a new node
    node* temp = head;
    insert->data = num;
    if (head == NULL)  //checking if the linked list is empty
    {
        head = insert;

    }
    else
    {
        while(temp->next != NULL)  //traversing the linked list to find the last node 
        {
            temp=temp->next;

        }
        temp->next = insert;
    }

}
void insert_at_head(node* &head, int num)
{   
    node* insert = new node();
    insert->data= num;
    insert -> next = head;
    head = insert;
}
void insert_at_middle(node *&head, int val, int num) // the val parameter in this function is the number after which the new node will be inserted
{
    node* temp= head;
    node* insert = new node();
    insert->data = num;
    while (temp->data != val)
    {
        temp= temp->next;
    }
    temp->next->next = insert;

}
void display(node* head) 
{
    node* temp= head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

 int main()
 {
    node* head1 = NULL;
    insert_end(head1,1);
    insert_end(head1,5);
    insert_at_middle(head1,1,92); 
    insert_end(head1,2);
    insert_at_head(head1,99);
    display(head1);

 }