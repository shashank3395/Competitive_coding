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
    int t,a,p,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int p=gcd(b,a);

        cout<<b/p<<" "<<a/p<<"\n";
    }
}
