//Traversal in tress Inorder, Preorder and Postorder


#include <iostream>
using namespace std;
//traversal in trees


class node
{
 public:
    node* left;
    int data;
    node* right;
};

node* createnode(int data)
{
    node*a=new node;
    a->data=data;
    a->left=NULL;
    a->right=NULL;
    return a;
}


void inorder(node* root)
{
    if(root!=0)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
        
    }
}


void preorder(node* root)
{
    if(root!=0)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
        
    }
}


void postorder(node* root)
{
    if(root!=0)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
        
    }
}





int main() {
    
    node*p=NULL;
    node*p1=NULL;
    node*p2=NULL;
    node*p3=NULL;
    node*p4=NULL;
    
    p=createnode(2);
    p1=createnode(5);
    p2=createnode(7);
    p3=createnode(9);
    p4=createnode(4);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    
    cout<<"Inorder"<<endl;
    inorder(p);
    cout<<endl;
    cout<<"Preorder"<<endl;
    preorder(p);
    cout<<endl;
    cout<<"Postorder"<<endl;
    postorder(p);
    
 
 

    return 0;
}

