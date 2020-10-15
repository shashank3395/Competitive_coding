// link :: https://www.spoj.com/problems/FACT0/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)
#define size1 200005
#define mod 1000000007
#define vll         vector < ll >
#define vpll        vector < pair < ll ,ll> >
#define pii         pair < int,int >
#define pll         pair < ll,ll >
#define fi          first
#define se          second
#define pb(x)       push_back(x)
#define endl        "\n"
#define mem1(x)     memset(x,-1,sizeof x)
#define mem(x)      memset(x,0,sizeof x)
#define mem63(x)    memset(x,63,sizeof x)
 
int dp[((int)1e6)*32 + 5];
vector<int> v;
void pre(){
    ll n = ((int)1e6)*32;
    ll i,j;
    dp[0] = dp[1] = 1;
    mem(dp);
    for(i=2;i<n;i++){
        if(dp[i] == 0){
            for(j=i*i;j<n;j+=i){
                dp[j] = 1;
            }
        }
    }
    for(i=2;i<n;i++){
        if(dp[i] == 0){
            v.pb(i);
        }
    }
}
int main()
{
    pre();
    ll n,i,j,t,x,y,w,c;
    cin>>n;
    while(n!=0){
        for(i=0;i<v.size();i++){
            if(n%v[i] == 0){
                c = 0;
                while(n%v[i] == 0){
                    c++;
                    n /= v[i];
                }
                cout<<v[i]<<"^"<<c<<" ";
            }
        }
        if(n != 1){
            cout<<n<<"^"<<1<<" ";
        }
        cout<<endl;
        cin>>n;
    }
    return 0;
}
