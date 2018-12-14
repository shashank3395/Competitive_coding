#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,x,y;
        cin>>n>>m>>x>>y;
        long long int total=(n*m-1)*(n*m-2);
        long long int totalattack=0;
        for(long long int i=1;i<=n;i++)
            for(long long int j=1;j<=m;j++)
                totalattack=totalattack+(n+m-2)+min(n-i,m-j)+min(i-1,j-1)+min(n-i,j-1)+min(i-1,m-j);
        totalattack=totalattack-((n+m-2)+min(n-x,m-y)+min(x-1,y-1)+min(n-x,y-1)+min(x-1,m-y))*2;
        totalattack=totalattack-((y-1)*(m-y)+(x-1)*(n-x)+min(x-1,y-1)*min(n-x,m-y)+min(n-x,y-1)*min(x-1,m-y))*2;
        cout<<total-totalattack<<"\n";
    }
}
