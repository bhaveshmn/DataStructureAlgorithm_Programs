//count sort


#include <iostream>
using namespace std;
//count sort one of the fastest sort algorithm

void traverse(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



void countsort(int a[], int size)
{
    int max=a[0];
    for(int i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    //making extra array auxillary array
    int b[max+1];
    for(int i=0;i<=max;i++)
    {
        b[i]=0;
    }
    
    for(int i=0;i<size;i++)
    {
        b[a[i]]= 1 + b[a[i]];
    }
    
    int i=0;
    int k=0;
    while(i<=max)
    {
        if(b[i]>0)
        {
            a[k]=i;
            k++;
            b[i]=b[i]-1;
        }
        else
        {
            i++;
        }
    }
    
}
    
 


int main() {
    //count sort
    int a[]={8,5,4,6,7,6,2};
    int size=sizeof(a)/sizeof(a[0]);
    
    cout<<"Before sorting"<<endl;
    traverse(a,size);
    countsort(a,size);
    cout<<"After sorting"<<endl;
    traverse(a,size);
    
    return 0;
}
