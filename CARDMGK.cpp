#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
         cin>>a[i];
        int change=0;
        for(i=1;i<n;i++)
            if(a[i-1]>a[i])
            change++;
        if(change<=1&&a[0]>=a[n-1])
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
