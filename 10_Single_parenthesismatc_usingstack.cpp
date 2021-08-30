#include <iostream>
using namespace std;

int top=-1;

class Parenthesis
{
    public:
    void push(string exp,int i)
    {
        
        char a[50];
        top++;
        a[top]=exp[i];
       
    
        
    }
    
    public:
    int pop(string exp,int i)
    {
        if(top==-1)
        {
            cout<<"unbalanced expression"<<endl;
            return 1;
            
           
        }
        else
        {
            top--;
            return 0;
        }
         
    }
};



int main() {
   //char exp[]={'(','8','+','1',')','3','-','1',')'};
   string exp="((8)(*--$$9)())";
   int size=exp.length();
   cout<<size;
  // int size=sizeof(exp)/sizeof(exp[0]);
   int flag=0;
   
   Parenthesis obj;
   
   for(int i=0;i<=size-1;i++)
   {
       // cout<<para[i]<<endl;
       if(exp[i]=='(')
       {
           obj.push(exp,i);
       }
       else if(exp[i]==')')
       {
           flag=obj.pop(exp,i);
           
       }
       
   }
  //cout<<"Expression Over, according to loop"<<endl;
  if(flag==0)
  {
  if(top==-1)
  {
      cout<<"Expression balanced";
  }
  else if(top!=-1)
  {
      cout<<"Expression unbalanced";
  }
  }
  

    return 0;
}
