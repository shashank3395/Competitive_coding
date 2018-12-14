#include<bits/stdc++.h>

using namespace std;

int sieve[40001]={0};

int isprime(int n)
{
    if(sieve[n]==0)
        return 1;
        return 0;
}
int main()
{   sieve[0]=sieve[1]=1;
    for(int i=2;i<40001;i++)
    {
        if(sieve[i]==0)
        {
            for(int j=i;j*i<40001;j++)
                sieve[i*j]++;
        }
    }
    int n;
    cin>>n;
    //n=501;
    int a[n];
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
           //a[i]=i+19;
       }
    int hash1[n]={0};
    int flag=0;
    int counter=0;
    for(int k=1;k<n;k++)
    {
        if(isprime(a[0]+a[k]))
            flag++;
    }
    if(flag==0&&n>1)
    {cout<<1<<" "<<2<<"\n";
      hash1[1]=1;
      //counter++;

    }
    for(int i=0;i<n;i++)
    {
       int parent=0;
        for(int j=i+1;j<n;j++)
        {


            if(isprime(a[i]+a[j])&&hash1[j]!=0&&parent==0&&hash1[i]==0)
                {cout<<j+1<<" "<<i+1<<"\n"; hash1[i]++; parent++; counter++;}
                 if(isprime(a[i]+a[j])&&hash1[j]==0)
                {cout<<i+1<<" "<<j+1<<"\n"; hash1[j]++; counter++;}


        }
         if(hash1[i]==0&&i!=0)
           {
               cout<<1<<" "<<i+1<<"\n";
               hash1[i]++;
               counter++;
           }
    }
    //cout<<"\ncounter is "<<counter;
}
