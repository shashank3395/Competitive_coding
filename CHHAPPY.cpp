#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int hash1[100001]={0};
    int temp[100001]={0};
    while(t--)
    {   for(int i=0;i<100001;i++)
        {
            temp[i]=0;
            hash1[i]=0;
        }
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
                temp[a[i]]=a[a[i]];
        for(int i=1;i<100001;i++)
                hash1[temp[i]]++;
        int counter=0;
        for(int i=1;i<100001;i++)
            if(hash1[i]>=2)
            counter++;
        if(counter>=1)
            cout<<"Truly Happy\n";
        else
            cout<<"Poor Chef\n";


    }
}
