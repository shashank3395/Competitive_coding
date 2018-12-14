#include<bits/stdc++.h>

using namespace std;

int main()
{


    int i,n,q,k;
    cin>>n>>q>>k;
    int a[4*n];
    int count1=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            count1++;
    }
    for(;i<4*n;i++)
    {
        a[i]=a[i%n];
    }
    string str;
    cin>>str;
    if(count1==n)
    {
        for(int i=0;i<q;i++)
        {
            if(str[i]=='?')
            {
                cout<<k<<"\n";
            }
        }
    }
    else if(count1==0)
    {
        for(int i=0;i<q;i++)
        {
            if(str[i]=='?')
            {
                cout<<0<<"\n";
            }
        }
    }
    else
    {


        int maxi=-1,maxj=-1;
        int maxlength=0;
        int current_length=0;
        int currenti=-1,currentj=-1;
        for(int i=0;i<2*n;i++)
        {
            if(a[i]==1&&currenti==-1)
            {
                currenti=i;
                currentj=i;
                current_length=currentj-currenti+1;

            }
            else if(a[i]==1&&currenti!=-1)
            {
                currentj++;
                current_length=currentj-currenti+1;
                if(maxlength<current_length)
                {
                   maxi=currenti;
                   maxj=currentj;
                   maxlength=maxj-maxi+1;
                }
            }
            else if(a[i]==0)
            {
                currenti=-1;
                currentj=-1;
                current_length=0;
            }

        }
        if(n<=currentj&&n>=currenti)
        {
        int max2i=-1,max2j=-1;
        int maxl2ength=0;
        int current_length=0;
        int currenti=-1,currentj=-1;
        for(int i=currentj%n+1;i<currenti;i++)
        {
            if(a[i]==1&&currenti==-1)
            {
                currenti=i;
                currentj=i;
                current_length=currentj-currenti+1;

            }
            else if(a[i]==1&&currenti!=-1)
            {
                currentj++;
                current_length=currentj-currenti+1;
                if(maxlength<current_length)
                {
                   maxi=currenti;
                   maxj=currentj;
                   maxlength=maxj-maxi+1;
                }
            }
            else if(a[i]==0)
            {
                currenti=-1;
                currentj=-1;
                current_length=0;
            }
        }


    }

}
}
