#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};



void traversal(Node *tail)
{
    Node *temp=tail->next;
    while(temp->next!=tail->next)
    {
        cout<<endl<<temp->data;
        temp=temp->next;
    }
    cout<<endl<<temp->data<<endl;
    
}
Node *inserAtFirst(Node *tail,int data)
{
    Node *p=new Node;
    p->data=data;
    p->next=tail->next;
    tail->next=p;
    return tail;
}

int main() {
    Node *tail;
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
    
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=a;
    tail=e;
    
    
    traversal(tail);
    tail=inserAtFirst(tail,84);
    cout<<endl<<"After inserting a node in first position"<<endl;
    traversal(tail);
    
    
    
    
    return 0;
}