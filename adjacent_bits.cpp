// link :: #include <bits/stdc++.h>
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
 
ll dp[105][105];
 
int main()
{
    boost1;
    boost2;
    int n,m,i,j,t,x,y,w,k;
    n = k = 100;
    mem(dp);
    dp[0][0] = 1;
    dp[0][1] = 2;
    for(i=2;i<=n;i++){
            dp[0][i] = dp[0][i-1] + dp[0][i-2];
        }
 
    for(i=1;i<=k;i++){
        dp[i][i+1] = 1;
        for(j=i+2;j<=n;j++){
            dp[i][j] = dp[i][j-1] + dp[i][j-2] + dp[i-1][j-1] - dp[i-1][j-2];
        }
    }
//    for(i=0;i<100;i++){
//        for(j=0;j<100;j++){
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    cin>>t;
    while(t--){
        cin>>x>>n>>k;
        if(n<k){
            cout<<0<<endl;
            continue;
        }
        cout<<x<<" "<<dp[k][n]<<endl;
    }
 
    return 0;
}
