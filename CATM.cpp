#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y;
    cin>>x>>y;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        float n=b; float m=d; float l=f;
        //float s=abs((c-a)/(m-n));
        //float s1=abs((e-a)/(l-n));
        //cout<<s<<" "<<s1;
        if((c-a)/(m-n)==(e-a)/(l-n))
        cout<<"NO\n";
        else
            cout<<"YES\n";


    }
}
