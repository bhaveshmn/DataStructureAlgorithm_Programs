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







node *deletenodefirst(node *head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty";
        return head;
    }
    else
    {
        node *temp=head;
        head=head->next;
        delete temp;
        return head;
    }
}


void deletenodelast(node *head)
{
    //mantain two node
    node *temp=head;
    node *q=NULL;
    while(temp->next!=NULL)
    {
        q=temp;
        temp=temp->next;
    }
    
    q->next=NULL;
    delete temp;
    
    
}



void deletenodeindx(node *head,int index)
{
    node *temp=head;
    node *q=NULL;
    for(int i=1;i<index;i++)
    {
        q=temp;
        temp=temp->next;
    }
    q->next=temp->next;
    delete(temp);
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
    
    
    head=deletenodefirst(head);
    //deletenodelast(head);
    //deletenodeindx(head,3);
    

    traverse(head);
    return 0;
}
