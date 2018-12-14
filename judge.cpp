#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    int a,b,n,count=0;
    cin>>t;
    while(t--)
    {   count=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if((b-a)>5)
            count++;

        }
        cout<<count<<"\n";
    }
}
