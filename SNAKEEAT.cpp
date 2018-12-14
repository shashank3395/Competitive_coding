#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define size1 100005
ll arr[size1];
ll arr1[size1];
ll k;


using namespace std;

int main()
{
    int t,n,i,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(i=1;i<=n;i++)
            cin>>arr[i];
            sort(arr+1,arr+1+n);
        arr1[0]=0;
        for(i=1;i<=n;i++)
            arr1[i]=arr1[i-1]+arr[i];
           // cout<<"entering while queries";
        while(q--)
        {   int mid;
            cin>>k;
            int ind1=lower_bound(arr+1,arr+1+n,k)-arr-1;
            int lo=1,hi=ind1,cur=ind1;
            while(lo<=hi)
            {
                int mid=(lo+hi)>>1;
                ll val =(mid+arr1[ind1]-arr1[mid])-k*(ind1-mid);
                if(val>=0)
                {
                    cur=mid;
                    hi=mid-1;
                }
                else lo=mid+1;

            }
            cout<<n-cur<<"\n";
        }

    }
    return 0;
}
