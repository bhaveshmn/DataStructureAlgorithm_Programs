//Quick Sort


#include <iostream>
using namespace std;

void printa(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
   cout<<endl;
}

int partition(int a[], int low, int high)
{
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
    
    
    do
    {
        
        while(a[i]<=pivot)
         {
           i++;
         }
        while(a[j]>pivot)
         {
             j--;
         }
    
        if(i<j)
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
       
    }
     while(i<j);
         
         
         //swap pivot and a[j]
        temp=a[low];
        a[low]=a[j];
        a[j]=temp;
        
        return j;
         
    
}

void quicksort(int a[], int low, int high)
{
    int pivotindex;
    
    if(low<high)
    {
     pivotindex= partition(a,low,high);
    // printa(a,7); //To see pass
     quicksort(a,low,pivotindex-1);//sort left subarray
     quicksort(a,pivotindex+1,high);//sort right subarray
     //here we are not maikng different array, we are working on the same array
    }
    
}


int main()
{
    //Quick sort
    int a[]={5,7,9,6,2,3,1};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"Before Sorting"<<endl;
    printa(a,size);
    quicksort(a,0,size-1);
    cout<<"After Sroting"<<endl;
    printa(a,size);

    return 0;
}
