#include <iostream>

using namespace std;

class node{
    public:
    int val;
    node *prev;
    node *next;
    
    node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};

void insert_head(int data, node* &head)
{
    node* new_node = new node(data);
 
    if(head != NULL) 
    {
        head -> prev = new_node;
    }
    
    new_node -> next = head;
    head = new_node;
}

void insert_tail(int data, node* &head){
    
    if(head == NULL)
    {
        return;
    }
    
    node *new_node = new node(data);
    node *temp = head;
    
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    
    temp -> next = new_node;
    new_node -> prev = head;
}

void display(node* head){
    
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> val<<" ";
        temp = temp -> next;
    }
}

int main()
{
    node *head = NULL;
    insert_head(0, head);
    insert_tail(1, head);
    insert_tail(2, head);
    insert_tail(3, head);
    
    display(head);
    
    return 0;
}    