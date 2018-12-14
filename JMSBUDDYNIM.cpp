#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long int a[n],b[m];

        for(int i=0;i<n;i++)
           {
               cin>>a[i];

           }

        for(int i=0;i<m;i++)
            {
                cin>>b[i];

            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(a[i]==b[j])
                    {
                        a[i]=-1;
                        b[j]=-1;
                        break;
                    }
                }
            }
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=-1&&a[i]!=0)
                    flag++;
            }
              for(int i=0;i<m;i++)
            {
                if(b[i]!=-1&&b[i]!=0)
                    flag++;
            }
            if(flag!=0)
                cout<<"Alice\n";
            else
                cout<<"Bob\n";





    }
}
