#include <iostream>
using namespace std;


class Node *f=NULL;
class Node *r=NULL;
  
  
class Node
{
public:
    int data;
    Node *next;
};


void insertq(int item)
{
    Node *p=new Node;
    
    p->data=item;
    p->next=NULL;
    
   // when heap memory get exhausted
    if(p==NULL)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        if(f==0 &&  r==0)
        {
            f=p;
            r=p;
        }
        else
        {
            r->next=p;
            r=p;
        }
    }
}


void deleteq(Node *temp)
{
    
    if((f==0 &&  r==0) || f==0 )
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        temp=f;
        f=f->next;
        cout<<"Deleted item is "<<temp->data<<endl;
        delete temp;
    }
}

void traversalq(Node *temp)
{
    if((f==0 &&  r==0) || f==0 )
    {
        cout<<"Queue is empty"<<endl;
        
    }
    else
    {
    temp=f;
    while(temp!=NULL)
    {
        cout<<(temp->data)<<endl;
        temp=temp->next;
    }
    }
}



int main() {
    
    Node *temp;
    
    insertq(25);
    insertq(7);
    insertq(4);
    insertq(8);
    traversalq(temp);
    deleteq(temp);
    deleteq(temp);
    traversalq(temp);
    
   
    return 0;
}