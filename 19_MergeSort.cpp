//Merge sort


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


void partition(int a[],int low, int mid, int high)
{
    int i=low;
    int j=mid+1;
    //needs extra array
    int b[high+1];
    //int b[100];
    //or use dynamic mem alocatn
    int k=low;
    
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    
    
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
    
    
}




//Recursion
void mergesort(int a[],int low, int high)
{
    int mid;
    
    if(low<high)
    {
        mid=(low+high)/2;
       mergesort(a,low,mid);
       mergesort(a,mid+1,high);
       partition(a,low,mid,high);
   
    }
   
   
   
}

int main() {
    //Merge sort
    int a[]={5,7,9,6,2,3,1};
    int size=sizeof(a)/sizeof(a[0]);
    int low=0;
    int high=size-1;
    
    traverse(a,size);
    mergesort(a,low,high);
    traverse(a,size);

    return 0;
}