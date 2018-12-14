#include<bits/stdc++.h>

using namespace std;
int sum(long long int a)
{   int sum1=0;
    int k=a;
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
          cout<<1<<" "<<0<<"\n";
      }
      else
      {
    int counter=0;
    int actualcounter=0;
    long long int actualnumber=n;
    int flag=0;
    arr[0]=n;
    long long int j=1;
    int count1=2;
    while(1)
    {   counter++;
        for(int i=0;i<count1;i++)
        {
            if(j%2==1)
            {
                arr[j]=sum(arr[(j-1)/2]);
                if((n%3==0&&k%3==0)&&(arr[j]==3))
                {
                    flag=1;
                    break;
                }
                else
                {
                    if(arr[j]==1)
                    {
                        flag=2;
                        break;
                    }
                }
                j++;
            }
            else
            {
               arr[j]=arr[(j-2)/2]+k;
               if(arr[j]%10==0)
               {
                   flag=3;
                   break;
               }
               j++;
            }
        }

        count1*=2;
        if(((flag==1)||(flag==2))||(flag==3))
        {
            break;
        }

    }
    if(flag==1)
        cout<<3<<" "<<counter<<"\n";
    if(flag==2)
        cout<<1<<" "<<counter<<"\n";
        if(flag==3)
        cout<<1<<" "<<counter+1<<"\n";
      }

}
}
