#include <iostream>

using namespace std;

class node{
    public:
    int val;
    node *next;
    
    node(int data){
        val = data;
        next = NULL;
    }
};

void insert_head(int data, node* &head){
    
    node *new_node = new node(data);
    new_node -> next = head;
    head = new_node;
}

void insert_tail(int data, node* &head){
    
    node* new_node = new node(data);

    if(head==NULL){
        head = new_node;
    }
    else{
    node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = new_node;
    }
    }
    
    void insert_between(int new_data, node* pre_node)
    {
        if (pre_node == NULL){
            return;
        }
    else{
    node* new_node = new node(new_data);
    new_node -> next = pre_node -> next;
    pre_node -> next = new_node;
    }
}

void display(node* head){
    
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> val<<" ";
        temp = temp-> next;
    }
}

int main()
{
    node *head = NULL;
    insert_head(1, head);
    insert_head(2, head);
    insert_head(3, head);
    
    insert_tail(10, head);
    insert_tail(20, head);
    
    insert_between(55, head);
    display(head);

    return 0;
}