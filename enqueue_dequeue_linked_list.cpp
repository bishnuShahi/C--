#include <iostream>

using namespace std;

class node{
    public:
    int val;
    node *next;
    node(int val)
    {
        this -> val = val;
        next = NULL;
    }
};

void enqueue(node* &head, int data)
{
    node* new_node = new node(data);
    
    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        node* temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
    temp ->next = new_node;
    }
}

void dequeue(node* &head)
{
    head = head -> next;
}

void display(node* head)
{
    while(head != NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }   
}

int main()
{
    node* head = NULL;
    int n, x;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    cout<<"Enter data: ";
    while(n--)
    {
        cin>>x;
        enqueue(head, x);
    }
    cout<<"Enqueue: ";
    display(head);
    cout<<"\nHow many times Dequeue: ";
    cin>>n;
    while(n--)
    {
        dequeue(head);    
    }
    cout<<"Dequeue: ";
    display(head);

    return 0;
}