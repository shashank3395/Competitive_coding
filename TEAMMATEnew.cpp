#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int calc(int n)
{   //cout<<"wrong";
    long long int ans1=1;
    for(int i=n-1;i>=2;i-=2)
        ans1=((ans1%1000000007)*(i)%1000000007)%1000000007;
    return ans1;

   /* if(n==1||n==0)
    return 1;
    return (n*(n-1)/2)%1000000007;*/
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int ans=1;
        int prevleft=0;
        int freq;
        int newteam;
        int n,i,a;
        cin>>n;
        int hash1[1000001];
        for(i=1000000;i>=0;i--)
            hash1[i]=0;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            hash1[a]++;
        }
        /*for(i=100;i>=1;i--)
            cout<<hash1[i]<<"\n";*/
        for(i=1000000;i>=1;i--)
        {
            freq=hash1[i];
            if(freq!=0)
            {
                     // cout<<ans<<"-\n";
                        if(freq==1)
                        {
                            if(prevleft==0)
                            prevleft=1;
                            else
                            {
                                ans*=1;
                                prevleft=0;
                            }
                        }
                        else
                        {


                             if(prevleft==0)
                             {
                                 newteam=calc(freq);
                                 ans=((ans%1000000007)*newteam)%1000000007;
                                 if(freq%2==1)
                                    prevleft=1;

                             }
                             else{
                                newteam=freq;
                                ans=((ans%1000000007)*newteam)%1000000007;
                                newteam=calc(freq-1);
                                ans=((ans%1000000007)*newteam)%1000000007;
                                if(freq%2==1)
                                    prevleft=0;
                             }

                        }


            }
        }
        cout<<ans<<"\n";
  }
 return 0;
}
