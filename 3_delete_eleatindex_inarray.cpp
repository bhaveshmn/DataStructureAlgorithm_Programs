#include <iostream>
using namespace std;

//Deletion in array
void traverse(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void deletion(int a[], int size, int index)
{
    for(int i=index+1;i<=size-1;i++)
    {
        a[i-1]=a[i];
    }
    
    
}


int main() {
    
    int a[]={6,7,9,1,3,5};
    int size=sizeof(a)/sizeof(a[0]);
    
    traverse(a,size);
    deletion(a,size,2);
    size=size-1;
    traverse(a,size);
    

    return 0;
}