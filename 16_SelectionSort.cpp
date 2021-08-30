
#include<iostream>
using namespace std;


void printArray(int arr[],int size)
{
    for(int i=0; i<size ;i++)
    {
        cout<<arr[i]<<endl;
    }
}

void seleSort(int arr[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        cout<<"Pass: "<< i <<endl;
        for(int j=i+1; j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
      
    }
}

//selection sort
int main()
{
    int arr[]={2,5,9,7,3,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting"<<endl;
    printArray(arr,size);
    seleSort(arr,size);
    cout<<"After sorting"<<endl;
    printArray(arr,size);
    return 0;
}