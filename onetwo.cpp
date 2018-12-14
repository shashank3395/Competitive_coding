#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int count1=0;
        int hashs[2*n]={0};
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {    count1=0;
            for(int j=i;j<n;j++)
            {
                count1+=a[i];
                hashs[count1]++;
            }


        }
        count1=0;
        for(int i=0;i<n;i++)
            if(hashs[i]==0)
            count1++;

    }
}
