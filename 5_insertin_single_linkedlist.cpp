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



void insertnodeindx(node *head,int data,int index)
{
    node *a=new node;
    a->data=data;
    node *temp=head;
    for(int i=1;i<index;i++)
    {
        temp=temp->next;
    }
    
    a->next=temp->next;
    temp->next=a;
}


void insertnodelast(node *head,int data)
{
    //create new node
    node *a=new node;
    a->data=data;
    
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next=a;
    a->next=NULL;
    
}






    
    
int main()

{
    node *head=NULL;
    head=insertnode(head,5);
    head=insertnode(head,4);
    head=insertnode(head,3);
    head=insertnode(head,2);
    head=insertnode(head,1);
    
    traverse(head);
    
    
    //insertnodeindx(head,24,3);
    //insertnodelast(head,52);
    

    traverse(head);
    return 0;
}