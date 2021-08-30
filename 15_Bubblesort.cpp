//Bubble sort


#include <iostream>
using namespace std;


void printarray(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}
void bubblesort(int a[],int size)
{
    int temp;
    int flag=0;
    
    for(int i=0;i<size-1;i++)
    {
        cout<<"pass: "<<i<<endl;
        for(int j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
            
        }
	// if array is already sorted then we are making it adaptive to use less pass as possible
        if(flag==0)
        {
            return;
        }
        
    }
}







int main() {
    int a[]={2,8,6,9,7,4,1};
    int size=sizeof(a)/sizeof(a[0]);
    
    cout<<"before sorting"<<endl;
    printarray(a,size);
    bubblesort(a,size);
     cout<<"after sorting"<<endl;
    printarray(a,size);
    
    
    

    return 0;
}
