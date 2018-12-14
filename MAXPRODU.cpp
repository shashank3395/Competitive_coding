#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;

       int start=(n-k*(k-1)/2)/k;
       int a[k];

       if(start<1)
        cout<<-1<<"\n";
       else
       {   int sum =0;
           for(int i=0;i<k;i++)
           {
               a[i]=start;
               sum+=start;
               start++;

           }
           int l=n-sum;
           for(int i=k-1;l--;i--)
            a[i]++;
           long long int prod=1;
           for(int i=0;i<k;i++)
           {
               prod=(prod%1000000007)*((a[i]*a[i]-a[i])%1000000007)%1000000007;
           }
           cout<<prod<<"\n";

       }

    }
}
