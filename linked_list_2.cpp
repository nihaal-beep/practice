#include<iostream>

using namespace std;
class node
{
    public:
    int data;
    int power;
    node* next;
    node()
    {
        data = 0;
        power = 0;
        next = NULL;
    }

};

void append_node(node* &head,int pow,int num)
{
    node* insert = new node(); 
    node* temp = head;
    insert->power = pow;
    insert->data = num;
    if (head == NULL)  
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

void display(node* head) 
{
    node* temp= head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"x^"<<temp->power<<endl;
        temp = temp->next;
    }
}

int main()
{
    node* head1 = NULL;
    node* head2= NULL;
    node* head3 = NULL;  // this list will store the result of polynomial addition
    cout<<"linked list 1 "<<endl;
    append_node(head1,3,2);
    append_node(head1,1,3);
    append_node(head1,0,1);
    display(head1);
    cout<< "linked list 2"<<endl;
    append_node(head2,2,2);
    append_node(head2,1,4);
    append_node(head2,0,2);
    display(head2);
    node* temp1 = head1;
    node* temp2 = head2;
    int sum = 0;
    while(temp1!=NULL && temp2!=NULL)
    {
        if (temp1->power > temp2-> power)
        {append_node(head3, temp1->power, temp1->data);
        temp1 = temp1-> next;
        }
        else if (temp2->power> temp1-> power)
        {
            append_node(head3, temp2->power, temp2->data);
            temp2= temp2->next;
        }
        else 
        {
            sum = temp1 ->data + temp2 -> data;
            append_node(head3,temp1->power,sum);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
    }
    cout<<"RESULT"<<endl;
    display(head3);
}

