#include<bits/stdc++.h>

using namespace std;

int maxk(int a,int b,int c)
{
    return max(a,max(b,c));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int h,w;
    cin>>h>>w;

    int a[h][w+2];
     for(int i=0;i<h;i++)
        {
            for(int j=0;j<w+2;j++)
            a[i][j]=0;
        }
    for(int i=0;i<h;i++)
        for(int j=1;j<w+1;j++)
        cin>>a[i][j];


    for(int i=1;i<h;i++)
        { for(int j=1;j<w+1;j++)
        {a[i][j]=a[i][j]+maxk(a[i-1][j-1],a[i-1][j],a[i-1][j+1]);
          cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
        int maxi=0;
        for(int i=1;i<w+1;i++)
            if(a[h-1][i]>maxi)
            maxi=a[h-1][i];

        cout<<maxi<<"\n";
    }


}
