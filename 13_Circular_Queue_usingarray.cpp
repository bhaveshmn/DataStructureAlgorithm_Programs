#include<iostream>
using namespace std;

 int f=0,r=0;
void traversal(int cqueue[],int size)
{
    if(f==r)
    {
        cout<<"Circular Queue is empty"<<endl;
    }
    else
    {
    
    for(int i=(f+1)%size;i<=r;i++)
    {
       cout<<cqueue[i]<<" ";
    }
    cout<<endl;
    
    }
}
void insert(int cqueue[],int item, int size)
{
    if((r+1)%size==f)
    {
        cout<<"Circular Queue is full"<<endl;
    }
    else
    {
        // Circular Increment
        r=(r+1)%size;
        cqueue[r]=item;
        
    }
}


int deletecq(int cqueue[],int size)
{
    int num;
    if(f==r)
    {
        cout<<"Circular Queue is empty"<<endl;
    }
    else
    {
        //circular increment
        f=(f+1)%size;
        num=cqueue[f];
        return num;
    }
    
    
}


int main()
{
    int num;
    int cqueue[5];
    int size=5;
    //int f=-1,r=-1;
    
    insert(cqueue,2,size);
   // traversal(queue, f, r);
    insert(cqueue,3,size);
    insert(cqueue,4,size);
    insert(cqueue,5,size);
 
   
    
    traversal(cqueue,size);
    num=deletecq(cqueue,size);
    cout<<"Deleted number is "<<num<<endl;
    num=deletecq(cqueue,size);
    cout<<"Deleted number is "<<num<<endl;
    num=deletecq(cqueue,size);
    cout<<"Deleted number is "<<num<<endl;
    traversal(cqueue,size);
    
    return 0;
}