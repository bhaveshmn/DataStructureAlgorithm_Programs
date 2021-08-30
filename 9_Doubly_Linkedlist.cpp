#include <iostream>
using namespace std;

class Node
{
    public:
    Node *prev;
    int data;
    Node *next;
};


Node *traversal(Node *head)
{
    Node *temp;
    temp=head;
    while(temp !=NULL)
    {
        cout<<endl<<temp->data;
        temp=temp->next;
    }
}

Node *reverse(Node *head)
{
    Node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
         temp=temp->next;
    }
    
    
    while(temp!=NULL)
    {
        cout<<endl<<temp->data;
        temp=temp->prev;
    }
}

Node *insertAtFirst(Node *head,int data)
{
    Node *p=new Node;
    p->data=data;
    p->next=head;
    p->prev=NULL;
    head=p;
    return head;
}


int main() {
    Node *head;
    Node *a=new Node;
    Node *b=new Node;
    Node *c=new Node;
    Node *d=new Node;
    Node *e=new Node;
    
    a->data=10;
    b->data=20;
    c->data=30;
    d->data=40;
    e->data=50;
    
    head=a;
    a->prev=NULL;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    d->next=e;
    e->prev=d;
    e->next=NULL;
    
    
    
    traversal(head);
    //cout<<"After Reverse"<<endl;
    //reverse(head);
    head=insertAtFirst(head,100);
    cout<<endl<<"After insertion at first position";
    traversal(head);
    
    
    return 0;
}