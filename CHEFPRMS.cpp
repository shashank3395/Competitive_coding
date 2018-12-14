#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int i,n;

    int sieve[200]={0};
    sieve[0]=1;sieve[1]=1;
    for(i=2;i<200;i++)
    {
        if(sieve[i]==0)
        {
            for(int j=2;j*i<200;j++)
                sieve[i*j]++;
        }
    }
    int refined[200];

    for(i=0;i<200;i++)
        refined[i]=sieve[i]; //cout<<sieve[i]<<" ";}
    vector<int> v1;
    int count1=0;
    vector<int>::iterator it;
     vector<int>::iterator it2;
    for(int j=0;j<200;j++)
    {
        if(refined[j]==2)
        {   count1=0;
            int check=j;
            for(i=2;i<=j;i++)
            {
                if(sieve[i]==0&&check%i==0)
                {
                    count1++;
                    check/=i;
                }

            }
            if(check==1);
            else
                count1=6;

        }
        if(count1==2)
            {v1.push_back(j);
            count1=0;
            }
        //cout<<"-"<<j;}
    }
    cin>>t;

    while(t--)
    {
      cin>>n;
      int flag=1;
      for(it=v1.begin();it!=v1.end();it++)
      {
          for(it2=it;it2!=v1.end();it2++)
          {
              if(*it+*it2==n)
              {   flag=0;
                  break;
              }
          }
      }

      if(flag==0)
        cout<<"YES"<<"\n";
      else
        cout<<"NO\n";
    }
}
