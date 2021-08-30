#include <iostream>
using namespace std;


int insertion(int arr[],int num, int index,int size)
{
    for(int i=size;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=num;
    return 1;
    
    
    
}
void traversal(int arr[],int size)
{
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[50]={2,5,6,9,11};
    int size=5;
    //cout<<size<<endl;
    int num=144, index=4;
    traversal(arr,size);
    insertion(arr,num,index,size);
    size=size+1;
    traversal(arr,size);
    



    return 0;
}