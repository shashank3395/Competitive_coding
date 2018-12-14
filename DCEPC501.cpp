#include<bits/stdc++.h>

using namespace std;
long long int maxelement(long long int s1,long long int s2,long long int s3)
{
    return max(s1,max(s2,s3));
}
long long int findit(long long int a[],int i,int last,long long int sum[])
{
    if(i>last)
        return 0;
    else if(sum[i]!=0)
        return sum[i];
    else
    {
        long long int s1=a[i]+findit(a,i+2,last,sum);
        long long int s2=a[i]+a[i+1]+findit(a,i+4,last,sum);
        long long int s3=a[i]+a[i+1]+a[i+2]+findit(a,i+6,last,sum);

        return sum[i]=maxelement(s1,s2,s3);
    }
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n+2];
        a[n+1]=0;
        a[n]=0;
        long long int sum[n]={0};
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);

            printf("%lld\n",findit(a,0,n-1,sum));
    }
}
