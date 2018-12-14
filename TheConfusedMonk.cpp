#include<iostream>
#include<bits/stdc++.h>

#define q 1000000007
using namespace std;

int gcd(int a,int p)
{
    if(a%p==0)
        return p;
    return gcd(p,a%p);
}
int calc(int a,int p)
{   long long int ans;
    if(p==0)
        return 1;
    if(p==1)
        return a;
    ans=((calc(a,p/2)%q)*(calc(a,p/2)%q))%q;

    if(p%2==1)
    ans=(ans*a)%q;
    return ans;

}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

        int p=a[0];
        if(n==1);
        else
        {
            for(i=1;i<n;i++)
            {
                p=gcd(a[i],p);
            }
        }
        //cout<<"hcf"<<p<<"\n";
        long long int prod=1;
        int ans=1;
        for(i=0;i<n;i++)
        {   ans=calc(a[i],p);
            prod=((prod%q)*(ans%q))%q;
        }
        cout<<prod;

}
