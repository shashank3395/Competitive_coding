// link :: https://www.spoj.com/problems/ADJDUCKS/
#include <bits/stdc++.h>
using namespace std;
#define INF 9223372036854775807
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define debug1(x,y) cout<<#x<<" :: "<<x<<"   "<<#y<<" :: "<<y<<endl;
#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)
#define size1 100005
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
#define flush       fflush(stdout)
 
ll a[size1],n,dp[size1];
 
ll fun(ll a,ll b){
    return abs(a-b);
}
ll fun(ll a,ll b,ll c){
    ll mini = min(c,min(a,b));
    a -= mini;
    b -= mini;
    c -= mini;
 
//    ll cop = (a + b + c)/3;
//    ll ans = abs(cop - a) + abs(cop - b) + abs(cop - c);
//    cop--;
//    ans = min(ans,abs(cop - a) + abs(cop - b) + abs(cop - c));
//    cop += 2;
//    ans = min(ans,abs(cop - a) + abs(cop - b) + abs(cop - c));
    return max(a,max(b,c));
}
ll solve(ll idx){
    if(idx == n-1 ){
        return INF;
    }
    if(idx == n){
        return 0;
    }
 
 
    if(dp[idx] != -1) return dp[idx];
 
    ll ans1 = fun(a[idx],a[idx+1]),temp1 = solve(idx+2);
    if(temp1 == INF){
        ans1 = INF;
    }else{
        ans1 += temp1;
    }
    ll ans2 = INF,temp2 = INF;
    if(idx + 3 <= n){
        ans2 = fun(a[idx],a[idx+1],a[idx+2]);
        temp2 = solve(idx+3);
    }
    if(ans2 < INF && temp2 < INF){
        ans2 += temp2;
    }else{
        ans2 = INF;
    }
 
    return dp[idx] = min(ans1,ans2);
}
int main()
{
    //boost1;
    //boost2;
//    freopen("input.txt", "r", stdin); // redirects standard input
//	freopen("output.txt", "w", stdout); // redirects standard output
 
    ll m,i,j,t,x,y,w,k,cas = 1,z,r,b,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    mem1(dp);
    cout<<solve(0)<<endl;
    return 0;
}
