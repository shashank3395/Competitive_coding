#include<iostream>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int ans=0;
    int low=1,high=n;
    int mid;
    int y;
    int count=0;
    //int a[n+1]={0};
    int cost=1000;
    int flag=0;
    while(low<=high&&cost>0)
    {
        mid=(low+high)/2;
        y=mid;
        cout<<1<<" "<<y<<"\n";
        cout.flush();
        cin>>y;
        if(y==0)
        {   count++;
            low=mid+1;
            cost--;
            if(mid==ans&&count!=1)
                break;
            ans=mid;


        }
        else if(y==1)
        {
            cost--;
            high=mid-1;
            if(cost-c>=0&&flag==0)
            {
                cost-=c;
                cout<<2<<"\n";
                cout.flush();

            }
            else
            {
                flag=1;
            }

        }
        else
        {
            cost--;
            high=mid;

        }

    }
    cout<<3<<" "<<ans+1;
    cout.flush();
}
