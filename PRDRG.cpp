#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b%a==0)
        return a;
    return gcd(b%a,a);
}
int main()
{
    int t;

    cin>>t;
    int a[26];
    a[1]=16777216;
    a[2]=8388608;
    for(int i=3;i<=25;i++)
        a[i]=(a[i-1]+a[i-2])/2;
    while(t--)
    {
        int n;
        cin>>n;
        int l=gcd(a[n],33554432);
        cout<<a[n]/l<<" "<<33554432/l<<" ";

    }
}
