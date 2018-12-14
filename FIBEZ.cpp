#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    long long int a[500001]={0};
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=500001;i++)
        a[i]=(a[i-1]+a[i-2])%100000007;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }
}
