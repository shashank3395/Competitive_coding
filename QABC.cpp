#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n,i;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        int flag=0;
        for(i=0;i<n;i++)
            if(b[i]<a[i])
              { flag=1;
                cout<<"NIE\n";
                break;
              }
              if(flag==1)
                continue;
         for(i=0;i<n-2;i++)
         {

             a[i+1]=a[i+1]+2*(b[i]-a[i]);
             a[i+2]=a[i+2]+3*(b[i]-a[i]);
             a[i]=a[i]+(b[i]-a[i]);
         }
         for(i=0;i<n;i++)
            if(b[i]!=a[i])
              flag=1;
         if(flag==1)
            {
              cout<<"NIE\n";
              continue;
            }
          else
                cout<<"TAK\n";
    }
}
