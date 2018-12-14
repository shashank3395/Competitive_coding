#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,q,temp;
    int ans=0;
    //cout<<ans;
    cin>>n>>q;
    int h[size1],a[size1];
    for(int i=0;i<n;i++)
        cin>>h[i];

        int max1=h[0];
        int caount1=1;

    for(int i=0;i<n;i++)
      { if(h[i]>max1)
          {
           count1++;
           a[i]=count1;
           max1=h[i];
          }
          else
          {
            a[i]=count1;
          }
      }
      //for(int i=0;i<n;i++)
        //cout<<" "<<a[i];

        int l,r;
    while(q--)
    {
        cin>>l>>r;
        l=(l+ans)%n;
        r=(r+ans)%n;
        //cout<<"new l:"<<l<<"new r:"<<r<<"\n";
        if(l>r)
            {
               temp=l;
               l=r;
               r=temp;
            }
            if(l!=0)
            {
            if(a[l]==a[l-1])
            ans=a[r]-a[l];
            else
                ans=a[r]-a[l]+1;
            }
            if(l==0)
               ans=a[r]-a[l]+1;
            cout<<ans<<"\n";
    }
}
