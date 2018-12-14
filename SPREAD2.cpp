#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long peopletillnow=1,peopletillprev=0;
        long long newpeople=0;
        /*for(i=1;i<=n;i++)
        {

            for(int j=peopletillprev+1;j<=peopletillnow;j++)
                newpeople+=a[j];
                peopletillprev=peopletillnow;
               // newpeople+=sumprev;
            peopletillnow+=newpeople;
            if(peopletillnow>=n)
                break;
        }
        cout<<i<<"\n";*/
        int countday=0;
        while(peopletillnow<n)
        {
            countday++;
            for(i=peopletillprev;i<peopletillnow;i++)
                newpeople+=a[i];
            peopletillprev=peopletillnow;
            peopletillnow+=newpeople;
        }
        cout<<countday<<"\n";

    }
    return 0;
}
