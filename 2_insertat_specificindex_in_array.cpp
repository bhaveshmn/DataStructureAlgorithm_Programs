#include <iostream>
using namespace std;


void traverse(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int insertion(int a[], int size,int item, int index)
{
    for(int i=size-1;i>=index;i--)
    {
        a[i+1]=a[i];
    }
    a[index]=item;
    
    if(index>size)
    {
        size=index+1;
    }
    else
    {
        size=size+1;
    }
    return size;
}


//insertion in array
int main() {
    
    int a[50]={6,7,9,1,3,5};
    int size=6;
    
    traverse(a,size);
    size=insertion(a,size,22,3);
   
    traverse(a,size);
    

    return 0;
}