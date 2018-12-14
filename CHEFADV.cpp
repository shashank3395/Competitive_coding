#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
 int t,n,m,x,y;

 cin>>t;
 while(t--)
 {
     cin>>n>>m>>x>>y;
     if(x==1||y==1)
     {
         if((x==1&&n>=2)&&((m-1)%y==0||(m-1)%y==1))
         { cout<<"Chefirnemo"<<"\n";
           continue;
         }
           if((y==1&&m>=2)&&((n-1)%x==0||(n-1)%x==1))
         { cout<<"Chefirnemo"<<"\n";
           continue;
         }

     }

     if((n-1)%x==1||(n-1)%x==0)
     {
         if((n-1)%x==0&&(m-1)%y==0)
         cout<<"Chefirnemo"<<"\n";
         else if((n-1)%x==1&&(m-1)%y==1)
         cout<<"Chefirnemo"<<"\n";
         else
            cout<<"Pofik"<<"\n";
         continue;
     }
     cout<<"Pofik"<<"\n";
 }
}
