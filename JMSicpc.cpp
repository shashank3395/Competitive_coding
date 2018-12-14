#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,e;
        cin>>n>>k;

        vector<int> v;
        int flag=0;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>e;
            v.push_back(e);
            sum+=e;
            if(e>k)
                flag++;

        }

        sort(v.begin(),v.end());
        vector<int>::iterator it,it1;
        it=upper_bound(v.begin(),v.end(),k);
       // int l=it-v.begin();

        int last=v.back();

        if(flag==0)
            cout<<sum<<"\n";
        else if(flag==1)
                cout<<sum<<"\n";
        else
        {
            if(n==1)
                cout<<sum<<"\n";
            else if(n==2)
            {
                if(v.front()>k)
                    cout<<sum-2*(v.front()-k)<<"\n";
                else
                    cout<<sum<<"\n";
            }
            else
            {

            long long int sub1=0,sub2=0;
            for(;(it!=v.end()-2)&&(it!=v.end()-1)&&(it!=v.end());it++)
                {sub1+=(*it-k); //cout<<"-"<<*it<<"-";}
                if(*it>k)
                    sub2=*it-k;
                if(sub2<=sub1)
            {
            if((sub1+sub2)%2==0)
                cout<<sum-sub1-sub2<<"\n";
            else
                cout<<sum-sub1-sub2-1<<"\n";
            }
            else
            {
                int remaining=sub2-sub1;
                cout<<sum-sub1-sub2-remaining<<"\n";
            }
            }

        }

    }
}
