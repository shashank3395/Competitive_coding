#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a,b;
    cin>>n;
    vector<long long int> v1,v2;
    for(long long int i=0;i<n;i++)
    {
      cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int c1=set<long long int>(v1.begin(),v1.end()).size();
    int c2=set<long long int>(v2.begin(),v2.end()).size();
    //cout<<"-c1"<<c1<<"-c2"<<c2<<"\n";
    long long int ans1=(long long int)(c1*(c1-1)/2);
    long long int ans2=(long long int)(c2*(c2-1)/2);

    long long int ans3=((long long int)((ans1%1000000007)*(ans2%1000000007)))%1000000007;
    cout<<ans3;
}
