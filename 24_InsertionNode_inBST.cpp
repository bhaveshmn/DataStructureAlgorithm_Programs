//Program for insertion a node in bst

//By iterative method




#include <iostream>
using namespace std;

//inserting an node in bst
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




void insert(node* root, int item)
{
    node * prev;
    while(root!=0)
    {
	//while inserting maintain a prev node
        prev=root;
        if(root->data==item)
        {
            cout<<"Element is already present"<<endl;
            return ;
           
        }
        else if(item < root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    
    

    //creating newnode and inserting in prev->left or right

    node *newnode=NULL;
    newnode=createnode(item);
    if(item < prev->data)
    {
        prev->left=newnode;
    }
    else
    {
        prev->right=newnode;
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
    
    insert(p,10);
    cout<< (p->right->left->data) ;
    
    
    

    return 0;
}


