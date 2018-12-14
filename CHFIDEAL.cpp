#include<iostream>

using namespace std;

int main()
{
    int a[4];
    int y;

    for(int i=0;i<4;i++)
        a[i]=0;

        cout<<1<<"\n";
        a[1]=1;
        a[0]=1;
        cin>>y;
        a[y]=1;
        for(int i=0;i<4;i++)
        {
            if(a[i]==0)
            {
                cout<<i<<"\n";
                break;
            }
        }
        cout.flush();
        for(int i=0;i<4;i++)
         a[i]=0;


}
