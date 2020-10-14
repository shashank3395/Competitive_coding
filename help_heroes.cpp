// link :: https://www.spoj.com/problems/DBALLZ/
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
 
int dp[(int)1e6 + 5],val[(int)1e3+5],W[(int)1e6 + 5];
 
int main()
{
    boost1;
    boost2;
 
    int m,i,j,t,x,y,w,n;
 
    cin>>t;
    while(t--){
        cin>>w>>n;
        for(i=0;i<n;i++){
            cin>>W[i];
        }
        for(i=0;i<n;i++){
            cin>>val[i];
        }
 
        mem(dp);
 
        for(i=0;i<=w;i++){
            for(j=0;j<n;j++){
                if(W[j] <= i){
                    dp[i] = max(dp[i],dp[i-W[j]] + val[j]);
                }
            }
        }
//        for(i=0;i<100;i++){
//            cout<<dp[i]<<" ";
//        }
//        cout<<endl;
        cout<<*max_element(dp,dp+w+1)<<endl;
    }
 
    return 0;
}
