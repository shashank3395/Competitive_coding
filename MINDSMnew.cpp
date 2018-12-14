#include<bits/stdc++.h>

using namespace std;
int sum(long long int a)
{   int sum1=0;
    long long int k=a;
    while(k!=0)
    {
        sum1+=k%10;
        k/=10;
    }
    return sum1;
}
int main()
{
    long long int n,k;
    long long int arr[100000];
    int t;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;
      if(n==1)
      {
          cout<<1<<" "<<0<<endl;
      }
      else
      {
    int counter=0;
    arr[0]=n;
    long long int j=1;
    int count1=2;
    while(counter<=10)
    {   counter++;
        for(int i=0;i<count1;i++)
        {
            if(j%2==1)
            {
                arr[j]=sum(arr[(j-1)/2]);
                j++;

            }
            else
            {
               arr[j]=arr[(j-2)/2]+k;
               j++;
            }
        }

        count1*=2;

    }
        int step=0;
        int currentstep=0;
        int interval=1;
        int f=interval;
        long long int ans=n;
    for(int i=0;i<j;i++)
        {   f--;
            if(arr[i]<ans)
            {
              ans=arr[i];
              step=currentstep;
            }
            //cout<<"-"<<arr[i]<<"-";
            if(f==0)
            {
                interval*=2;
                f=interval;
                currentstep++;
               // cout<<"\n";
            }

        }
        cout<<ans<<" "<<step<<endl;

      }

}
}
