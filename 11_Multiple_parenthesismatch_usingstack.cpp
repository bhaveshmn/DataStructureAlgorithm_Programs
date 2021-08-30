#include <iostream>
#include<string.h>
using namespace std;

int top=-1;
char a[50];

class Parenthesis
{
    public:
    void push(string exp,int i)
    {
        
        //char a[50];
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
            if(a[top]=='(' && exp[i]==')')
            {
            top--;
            return 0;
            }
            else if(a[top]=='[' && exp[i]==']')
            {
            top--;
            return 0;
            }
            else if(a[top]=='{' && exp[i]=='}')
            {
            top--;
            return 0;
            }
            else
            {
                cout<<"unbalanced expression"<<endl;
                return 1;
            }
        }
    }
    
    
    
};



int main() {
   //char exp[]={'(','8','+','1',')','3','-','1',')'};
   string exp="[4-6]((8){(9-8)})";
   int size=exp.length();
  // int size=sizeof(exp)/sizeof(exp[0]);
   int flag=0;
   
   Parenthesis obj;
   
   for(int i=0;i<=size-1;i++)
   {
       
       if(exp[i]=='(' ||  exp[i]=='[' || exp[i]=='{')
       {
           obj.push(exp,i);
       }
       else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
       {
           flag=obj.pop(exp,i);
           if(flag==1)
           {
               break;
           }
           
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
    
