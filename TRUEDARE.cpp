#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int i,t1,t2,t3,t4,a;
        cin>>t1;
        int hash1[100000]={0};
        for(i=0;i<t1;i++)
        {
            cin>>a;
            hash1[a]++;
        }
             cin>>t2;
        int hash2[100000]={0};
        for(i=0;i<t2;i++)
        {
            cin>>a;
            hash2[a]++;
        }
        cin>>t3;
        int flag1=0,flag2=0;
        for(i=0;i<t3;i++)
        {
            cin>>a;
            if(hash1[a]==0)
                flag1++;
        }
        cin>>t4;
          for(i=0;i<t4;i++)
        {
            cin>>a;
            if(hash2[a]==0)
                flag2++;
        }
        if((flag1+flag2)==0)
            cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";
    }

}
