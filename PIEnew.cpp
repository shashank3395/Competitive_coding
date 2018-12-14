#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
   int t,i,n,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>f;
        f++;
        int r[n];
        for(i=0;i<n;i++)
           {
            cin>>r[i];
            r[i]=r[i]*r[i];
           }
         sort(r,r+n,greater<int>());
         double lo=0.0000;
         double hi=4e8;
         double mid;
         int c=0;
         long long int count1=0;

        while(1)
        {   count1=0;
            c++;
            mid=(lo+hi)/2;//cout<<"----";
            for(i=0;i<n;i++)
            {
                count1+=(long long int)floor((M_PI*r[i])/mid);
            }
            if(count1>=f)
                lo=mid;
            else
                hi=mid;
            if(c==10000)
                break;

        }

      //cout<<lo<<"\n";
        printf("%.4f\n",lo);
    }
}
