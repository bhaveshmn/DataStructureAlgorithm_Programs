//Insertion Sort


// Online C++ compiler to run C++ program online
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


void insertionsort(int a[], int size)
{
    int j,key;
    for(int i=1;i<size;i++)
    {
        j=i-1;
        key=a[i];
        
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        
        a[j+1]=key;
        
    }
}



int main() {
    //Insertion Sort
    int a[]={5,24,4,2,7,6,9};
    int size=sizeof(a)/sizeof(a[0]);
    
    cout<<"Before sorting"<<endl;
    traverse(a,size);
    insertionsort(a,size);
    cout<<"After sorting"<<endl;
    traverse(a,size);
    

    return 0;
}
