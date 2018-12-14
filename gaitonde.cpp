#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {  int count=0;
    int sum=0;
        cin>>n;
        int l;
        for(int i=0;i<n;i++)
        {
           cin>>l;
           sum+=l;
           if((sum%2==1&&sum!=1)||(sum%4==0&&sum!=4))
           {
               count++;
           }
           else
           {
               sum-=l;
           }
        }
        if(count%2==1)
            cout<<"Ghayeeth"<<"\n";
        else
            cout<<"Siroj"<<"\n";
    }

}
