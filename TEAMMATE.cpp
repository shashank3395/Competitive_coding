#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int calc(int n)
{
    if(n==1||n==0)
        return 1;
    return (((n%1000000007)*((n-1)%1000000007))%1000000007)/2;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,p;
        cin>>n;
        vector<int>v1;
        for(i=0;i<n;i++)
        {cin>>p;
         v1.push_back(p);
        }
   sort(v1.begin(),v1.end(),greater<int>());

        long long int ans=1;
        int prevleft=0;
        int freq;
        int newteam;
        vector<int>::iterator it;
        it=v1.begin();
        while(it!=v1.end())
        {   freq=count(v1.begin(),v1.end(),*it);
        //cout<<freq<<"\n";
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
                     ans*=newteam;
                     if(freq%2==1)
                        prevleft=1;

                 }
                 else{
                    newteam=freq;
                    ans*=newteam;
                    newteam=calc(freq-1);
                    ans*=newteam;
                    if(freq%2==1)
                        prevleft=0;
                 }
                /*if(prevleft==0)
                   ans*=calc(freq);
                if(prevleft==1)
                    ans*=(freq*calc(freq-1));
                if(prevleft==0&&freq%2==0)
                    prevleft=0;
                else if(prevleft==0&&freq%2==1)
                    prevleft=1;
                else if(prevleft==1&&freq%2==0)
                    prevleft=1;
                else if(prevleft==1&&freq%2==1)
                    prevleft=0;*/
             }

               it+=freq;
        }
        cout<<ans<<"\n";
    }
}
