// link :: https://www.spoj.com/problems/MKBUDGET/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define debug1(x,y) cout<<#x<<" :: "<<x<<"   "<<#y<<" :: "<<y<<endl;
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
#define flush       fflush(stdout)
 
ll dp[26][50],p,q,r,n,a[26];
 
ll fun(ll idx,ll x){
    if(idx == n) return 0;
 
    if(dp[idx][x] != -1) return dp[idx][x];
 
    ll sal = q * max(a[idx],x);
    ll start_bonus = 0;
    if(a[idx] > x){
        start_bonus = (a[idx] - x ) * p;
    }
    ll hired = max(a[idx],x);
    ll ans = 99999999999999999;
    for(int j = 0;j<= hired;j++){
        ans = min(ans,sal + start_bonus + fun(idx+1,j) + (hired - j) * r);
    }
    return dp[idx][x] = ans;
}
 
 
int main()
{
    //boost1;
    //boost2;
//    freopen("input.txt", "r", stdin); // redirects standard input
//	freopen("output.txt", "w", stdout); // redirects standard output
 
    ll m,i,j,t,x,y,w,k=1;
    while(1){
        cin>>n;
        if(n == 0) break;
 
        cin>>p>>q>>r;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        mem1(dp);
        cout<<"Case "<<k++<<", cost = $"<<fun(0,0)<<endl;
    }
 
    return 0;
}
