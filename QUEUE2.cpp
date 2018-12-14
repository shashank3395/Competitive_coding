#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l,k;
        cin>>n>>m>>k>>l;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);

        int min1=l*(m+n+1)-k;
        int cla;
        for(int i=0;i<n;i++)
        {
            cla=l*(m+i+1)-a[i];
            if(cla<min1)
                min1=cla;
        }
        cout<<min1<<"\n";

    }
}
