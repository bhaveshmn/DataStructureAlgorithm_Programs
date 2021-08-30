#include <iostream>
#include <cstring>
using namespace std;


void insertion(char arr[],char ch,int num,int size,int a)
{
    for(int i=size;i>=a;i--)
    {
        arr[i+num]=arr[i];
    }
    for(int z=0;z<num;z++)
    {
        arr[a]=ch;
        a++;
        
    }
    
    
    
}
void traversal(char arr[],int size)
{
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

int main() {
    char arr[50]={'a','b','c','d'};
    int size=strlen(arr);
    int a=size/2;
   // cout<<size<<endl;
   //cout<<a<<endl;
    char ch='m';
    int num=3;
    traversal(arr,size);
    insertion(arr,ch,num,size,a);
    size=size+num;
    traversal(arr,size);
    



    return 0;
}
