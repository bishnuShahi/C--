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
    
void insert_between(int new_data,int pos, node* &head){
    
        node* new_node = new node(new_data);
        new_node -> next = NULL;
        
        if (pos == 0){
            return;
        }
        else if(pos == 1){
            new_node -> next = head;
            head = new_node;
        }
        else{
            node* temp = head;

            for(int i = 1; i < pos-1; i++)
            {
                if(temp != NULL)
                {
                    temp = temp -> next;
                }
            }
            if(temp != NULL)
            {
                new_node -> next = temp -> next;
                temp -> next = new_node;
            }
        }
    }
    
    
void delete_head(node* &head)
{
    head = head -> next;
}

void delete_tail(node* &head)
{
    node* temp = head;
    node* pre = NULL;
    while(temp -> next != NULL)
    {
        pre = temp;
        temp = temp -> next;
    }
    pre -> next = NULL;
}

void delete_between(int pos, node* &head)
{
    node* temp = head;
    node* next = NULL;
    if(head == NULL)
    {
        return;
    }
    if(pos == 1)
    {
        head = temp -> next;
        return;
    }
    for(int i = 2; i < pos-1 && temp !=NULL; i++)
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
    }
    next = temp -> next -> next;
    temp -> next = next;
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
/*
    insert_head(3, head);
    insert_head(2, head);
    insert_head(1, head);
    
    insert_tail(10, head);
    insert_tail(20, head);
    
    insert_between(55, 3, head);
    
    delete_head(head);
    
    display(head);
    delete_tail(head);
    cout<<"\n";
    
    display(head);
    delete_between(4, head);
    cout<<"\n";
    
    display(head);
*/
    cout<<"-------------------Linked List------------------------"<<endl;
    cout<<"Select your operation: (To end operation at any point enter 'N')"<<endl;
    int ans = 1, pos, data;
    
    while(ans != 'N' && ans != 'n')
    {
        
    cout<<"1 - Insertion\n2 - Deletion\n3 - Sorting(Not Available)"<<endl;
    cin>>ans;
    
    switch(ans)
    {
        case 1:
        {
            int ans;
            cout<<"\n\t1- Insertion at Head\n\t2- Insertion at tail\n\t3- Insertion at any postion"<<endl;
            cin>>ans;
            while(ans != 'N' && ans != 'n')
            {
            switch(ans)
            {
                case 1:
                {
                    int val;
                    cout<<"\nEnter the value: ";
                    cin>>val;
                    insert_head(val, head);  
                    display(head);
                }
                break;
                case 2:
                {
                    int val;
                    cout<<"\nEnter the value: ";
                    cin>>val;
                    insert_tail(val, head);  
                    display(head);
                }
                break;
                case 3:
                {
                    int val, pos;
                    cout<<"\nEnter the value: ";
                    cin>>val;
                    cout<<"\nEnter the Position: ";
                    cin>>pos;
                    insert_between(val, pos, head);  
                    display(head);
                }
                break;
            }
        }
        }
        break;
        
        case 2:
        {
            int ans;
            cout<<"\n\t1- Deletion at Head\n\t2- Deletion at tail\n\t3- Deletion at any postion"<<endl;
            cin>>ans;
            
            while(ans != 'N' && ans != 'n')
            {
            switch(ans)
            {
                case 1:
                {
                    cout<<"Deleting.... ";
                    delete_head(head); 
                    cout<<"Deleted successfully";
                    display(head);
                }
                break;
                case 2:
                {
                    cout<<"Deleting.... ";
                    delete_tail(head);  
                    cout<<"Deleted successfully";
                    display(head);
                }
                break;
                case 3:
                {
                    int pos;
                    cout<<"Enter the postion: ";
                    cin>>pos;
                    cout<<"Deleting.... ";
                    delete_between(pos, head);  
                    cout<<"Deleted successfully";
                    display(head);
                }
                break;
            }
        }
        }
        break;
        case 3:
        {
            int ans;
            cout<<"Coming soon";//sort_list();
        }
        break;
    }
    }


    return 0;
}