#include <iostream>
using namespace std;



class node
{
  public:
    int data;
    node* next;
};


void traverse(node *head)
{
    node *temp=NULL;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* insertnode(node *head,int data)
{
    node *a=new node;
    a->data=data;
    if(head==NULL)
    {
        head=a;
        a->next=NULL;
    }
    else
    {
        a->next=head;
        head=a;
    }
    return head;
}


node* reversell(node *head)
{
    node *prevnode=NULL;
    node *currentnode=head;
    node *nextnode=head;
    
    
    while(currentnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
    return head;
}


int main()

{
    node *head=NULL;
    head=insertnode(head,5);
    head=insertnode(head,4);
    head=insertnode(head,3);
    head=insertnode(head,2);
    head=insertnode(head,1);
    
    head=reversell(head);
    traverse(head);
    return 0;
}


