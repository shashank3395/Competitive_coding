#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,m,i;
    int prime[100000]={0};
    prime[0]=1;
    prime[1]=1;
    for(i=2;i<1000;i++)
    {
        if(prime[i]==0)
            for(int j=i;j*i<100000;j++)
            prime[i*j]=1;
    }
int count1=0;
    vector<int> v1;
    vector<int>:: iterator it;
    for(i=0;i<100000;i++)
    {  if(prime[i]==0)
        {
         //cout<<" "<<i;
         v1.push_back(i);
         //count1++;
        }
    }
    //cout<<" -- "<<count1;
    while(t--)
    {
        cin>>n>>m;

        for(i=n;i<=m;i++)
        {   int flag=0;
            for(it=v1.begin();*it<=sqrt(i);it++)
            {
                if(i%*it==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0&&i!=1)
                cout<<i<<"\n";

        }
        cout<<"\n";

    }
}
