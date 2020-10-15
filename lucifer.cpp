// link :: https://www.spoj.com/problems/LUCIFER/
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
 
ll digit[20];
ll dp[20][170][170][2];
int prime[505];
 
void pre(){
    int i,j;
    mem(prime);
    prime[0] = prime[1] = 1;
    for(i=2;i<500;i++){
        if(prime[i] == 0){
            for(j=i*i;j<500;j+=i){
                prime[j] = 1;
            }
        }
    }
 
}
ll fun(int tight,int idx,ll sum1,ll sum2,int flag){
    if(idx == -1){
        if(sum2 > sum1 && !prime[sum2-sum1]){
            //cout<<abs(sum1-sum2)<<endl;
            return 1;
        }
        return 0;
    }
    if(!tight && dp[idx][sum1][sum2][flag] != -1){
        return dp[idx][sum1][sum2][flag];
    }
 
    ll i;
    ll res = 0;
    if(tight){
        if(flag == 0){
            for(i=0;i<=digit[idx]-1;i++){
                res += fun(!tight,idx-1,sum1+i,sum2,!flag);
            }
        }else{
            for(i=0;i<=digit[idx]-1;i++){
                res += fun(!tight,idx-1,sum1,sum2+i,!flag);
            }
        }
        if(flag == 0)
            res += fun(tight,idx-1,sum1+i,sum2,!flag);
        if(flag == 1){
            res += fun(tight,idx-1,sum1,sum2+i,!flag);
        }
    }else{
        if(flag == 0){
            for(i=0;i<=9;i++){
                res += fun(tight,idx-1,sum1+i,sum2,!flag);
            }
        }else{
            for(i=0;i<=9;i++){
                res += fun(tight,idx-1,sum1,sum2+i,!flag);
            }
        }
    }
    if(!tight){
        dp[idx][sum1][sum2][flag] = res;
    }
    return res;
}
 
int main()
{
    boost1;
    //boost2;
    pre();
    int n,m,i,j,t,x,y,w,a,b;
    cin>>t;
    while(t--){
        cin>>b>>a;
        i = 0;
        mem(digit);
        mem1(dp);
        while(a != 0){
            digit[i++]  = a%10;
            a /= 10;
        }
 
        ll res1 = fun(1,10,0,0,0);
        i = 0;
        b--;
        mem(digit);
        mem1(dp);
        while(b != 0){
            digit[i++]  = b%10;
            b /= 10;
        }
        cout<<res1-fun(1,10,0,0,0)<<endl;
 
    }
 
    return 0;
}
