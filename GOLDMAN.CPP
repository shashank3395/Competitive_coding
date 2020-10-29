#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,no;
ll dp[2][100001];

ll findbit(ll no)
{
	ll n=0;
	while(no)
	{
		n++;
		no/=2;
	}
	return n;
}
ll findset(ll no)
{
	ll n=0;
	while(no)
	{
		if(no&1)
			n++;
		no/=2;
	}
	return n;
}

ll findit(ll i, ll zero, ll one)
{
	if((i==n) && (zero==one))
		return 1;
	else if(i==n)
		return 0;

	
	return findit(i+1, zero, one)+findit(i+1, zero+dp[0][i], one+dp[1][i]);
}
string findbinar(ll no)
{
	string str="";
	while(no)
	{
		str+=((no%2)+'0');
		no=no/2;
	}
	return str;
}
int main()
{
	cin>>n;
	ll arr[n];
	ll maxa=-1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		maxa=max(maxa, arr[i]);
	}
	no=findbit(maxa);
	for(int i=0;i<n;i++)
	{
		int sett=findset(arr[i]);
		dp[0][i]=no-sett;
		dp[1][i]=sett;
	}

	ll ans = findit(0, 0, 0)-1;
	ll nn = findbit(ans);
	string binar = findbinar(ans);
	for(int i=0;i<no-nn;i++)
		binar='0'+binar;
	cout<<binar<<"\n";
}
	
	
