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

void insertHead(int val, node* &head){
    node* n = new node(val);
    
    if(head == NULL)
    {
        n -> next = n;
        head = n;
        return;
    }
    
    node *temp = head;
    while(temp -> next != head)
    {
        temp = temp -> next;
    }
    temp -> next = n;
    n -> next = head;
    head = n;
}

void insertTail(int val, node* &head){
    node* n = new node(val);

    if(head==NULL){
        n -> next = n;
        head = n;
        return;
    }

    node *temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp->next = n;
    n->next = head;
}


void display(node* head){
    
    node* temp = head;
    do{
        cout<<temp -> val<<" ";
        temp = temp -> next;
    }while(temp != head);
}

int main(){
    
    node* head = NULL;
    
    insertTail(5, head);
    insertTail(4, head);
    insertTail(3, head);
    insertTail(2, head);
    insertTail(1, head);
    
    display(head);
    
    insertHead(0, head);
    cout<<"\n";
    display(head);
    
    return 0;
}