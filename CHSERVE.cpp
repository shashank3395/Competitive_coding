#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t,p1,p2,k;
   cin>>t;
   while(t--)
   {
       cin>>p1>>p2>>k;
       int ans=(p1+p2)%(2*k);
       if(ans>=0&&ans<k)
        cout<<"CHEF\n";
       else
        cout<<"COOK\n";
   }
}
