#include <iostream>

using namespace std;

class node{
    public:
    int val;
    node* right;
    node* left;
    node(int data)
    {
        this -> val = data;
        this -> right = NULL;
        this -> left = NULL;
    }

};

node* tree(node* root){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter left node "<<data<<" ";
    root -> left = tree(root -> left);

    cout<<"Enter right node "<<data<<" ";
    root -> right = tree(root -> right);

    return root;

}

void preOrder(node* &root)
{
    if(root != NULL)
    {
        cout<<root -> val<<" ";
        
        preOrder(root -> left);
        preOrder(root -> right);
    }
}

void inOrder(node* &root)
{
    if(root != NULL)
    {
        inOrder(root -> left);

        cout<<root -> val<<" ";
        
        inOrder(root -> right);
    }
}

void postOrder(node* &root)
{
    if(root != NULL)
    {
        postOrder(root -> left);
        postOrder(root -> right);
        cout<<root -> val<<" ";
    }
}
int main(){

    node* root = NULL;

    root = tree(root);
    cout<<"PreOrder: ";
    preOrder(root);
    cout<<"\nInOrder: ";
    inOrder(root);
    cout<<"\nPostOrder: ";
    postOrder(root);

    return 0;
}