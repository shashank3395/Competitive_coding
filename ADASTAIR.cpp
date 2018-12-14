#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int a[n];
        int count1=0;
        int prev=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int height=a[i]-prev;
            if(height%k==0)
                count1=count1+(height/k)-1;
            else if(height%k!=0)
                count1=count1+(height/k);
            prev=a[i];

        }
        cout<<count1<<"\n";
    }
}
