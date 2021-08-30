#include<iostream>
using namespace std;

 int f=-1,r=-1;
void traversal(int queue[])
{
    for(int i=f+1;i<=r;i++)
    {
       cout<<queue[i]<<" ";
    }
    cout<<endl;
}
void insert(int queue[],int item, int size)
{
    if(r==size-1)
    {
        cout<<"Queue full"<<endl;
    }
    else
    {
        r++;
        queue[r]=item;
        
    }
}


int pop(int queue[],int size)
{
    int num;
    if(f==r)
    {
        cout<<"Queue empty"<<endl;
    }
    else
    {
        f++;
        num=queue[f];
        return num;
    }
    
    
}


int main()
{
    int num;
    int queue[50];
    int size=50;
    //int f=-1,r=-1;
    
    insert(queue,2,size);
   // traversal(queue, f, r);
    insert(queue,3,size);
    insert(queue,4,size);
    insert(queue,5,size);
    insert(queue,6,size);
    insert(queue,7,size);
    traversal(queue);
    num=pop(queue,size);
    cout<<"Deleted number is "<<num<<endl;
    num=pop(queue,size);
    cout<<"Deleted number is "<<num<<endl;
    traversal(queue);
    
    return 0;
}