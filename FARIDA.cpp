#include<bits/stdc++.h>

using namespace std;

long long int findit(long long int a[],int i,int last,long long int sum[])
{
  if(i>last)
        return 0;
  if(sum[i]!=-1)
    return sum[i];
  else
    return sum[i]=max(a[i]+findit(a,i+2,last,sum),findit(a,i+1,last,sum));
}
int main()
{
    int t;int c=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n+1];
        long long int sum[n];
        a[n]=0;
        for(int i=0;i<n;i++)
            {
                scanf("%lld",&a[i]);
                sum[i]=-1;
            }
        printf("Case %d: %lld\n",c,findit(a,0,n-1,sum));
        c++;

    }

}
