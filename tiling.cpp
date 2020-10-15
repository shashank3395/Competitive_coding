#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)
#define size1 100005
#define mod 1000000007
 
ll A[5][5]={ {1,1,2,1,0},
           {1,0,0,0,0},
           {1,0,1,0,0},
           {1,0,0,0,1},
           {0,0,0,1,0}
        };
 
ll single(ll a[][5],ll b[][5],int i,int j){
    ll res= 0;
    for(int k=0;k<5;k++){
        res = (res + (a[i][k] * b[k][j]) );
    }
    return res;
}
void multi(ll a[][5],ll b[][5],ll c[][5]){
    ll ans[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            ans[i][j] = single(a,b,i,j);
 
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            c[i][j] = ans[i][j];
        }
    }
}
void fun(ll res[][5],ll n){
    if(n == 1 || n == 0){
        return ;
    }
    fun(res,n/2);
 
    multi(res,res,res);
    if(n%2){
        multi(res,A,res);
    }
}
int main()
{
    boost1;
    boost2;
    ll n,m,i,j,t,a,b,c,x,y,w,d,k= 1;
    cin>>t;
    while(t--){
        ll res[5][5]={ {1,1,2,1,0},
           {1,0,0,0,0},
           {1,0,1,0,0},
           {1,0,0,0,1},
           {0,0,0,1,0}
        };
 
        cin>>n;
        if(n == 0){
            cout<<k++<<" "<<1<<endl;
            continue;
        }
        if(n == 1){
            cout<<k++<<" "<<1<<endl;
            continue;
        }
        ll B[5][5];
        B[0][0] = 1,B[1][0] = 1,B[2][0] = 1,B[3][0] = 1,B[4][0] = 0;
        fun(res,n-1);
        ll ans = single(res,B,0,0);
        if(ans > INT_MAX || ans < 0){
            ans = 0 ;
        }
        cout<<k++<<" "<<ans<<"\n";
    }
 
    return 0;
}
 
