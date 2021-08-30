//Program for Searching an element in bst, there are two ways recursion and iterative


// By Recursion



#include <iostream>
using namespace std;


class node
{
 public:
    int data;
    node* left;
    node* right;
};


node* createnode(int data)
{
    node *a=new node;
    a->data=data;
    a->left=NULL;
    a->right=NULL;
    return a;
}


void inorder(node *root)
{
    
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    
}

// searching an element in bst with recursion
node* search(node *root, int item)
{
    if(root!=NULL)
    {
        if(root->data==item)
        {
            return root;
        }
        else if(item < root->data)
        {
            search(root->left,item);
        }
        else
        {
            search(root->right,item);
        }
    }
    else
    {
        return 0;
    }
}




int main() {
    
    node*p=NULL;
    node*p1=NULL;
    node*p2=NULL;
    node*p3=NULL;
    node*p4=NULL;
    
    p=createnode(9);
    p1=createnode(4);
    p2=createnode(11);
    p3=createnode(2);
    p4=createnode(7);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    
    node *a=NULL;
    inorder(p);
    cout<<endl;
    a=search(p,9);
    if(a!=NULL)
    {
        cout<<"Element found "<<a->data;
    }
    else
    {
        cout<<"element not found";
    }
    
    

    return 0;
}
