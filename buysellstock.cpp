#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isprime[1001]; 
ll n;
ll S[1001];
ll dp[1001][2][1001];

ll findit(int i, int hvst, int prev)
{
	
	if(i==n)
		return 0;
	if(dp[i][hvst][prev]!=-1)
		return dp[i][hvst][prev];
	if(hvst==0)
	{
		return dp[i][hvst][prev] = max(findit(i+1, 1, i),findit(i+1, 0, prev)); 
	}
	else
	{
		if(((i & 1)==(prev & 1))&&(isprime[i]==false))
		{
			return dp[i][hvst][prev] = max(findit(i+1, 1, prev),findit(i+1, 0, -1)+S[i]-S[prev]);
		}
		else
		{
			return dp[i][hvst][prev] = findit(i+1, 1, prev);
		}
	}
	return 1;
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>S[i];
	memset(isprime, true, sizeof(isprime));
	for(int i=0;i<1000;i++)
		for(int j=0;j<2;j++)
			for(int k=0;k<1000;k++)
				dp[i][j][k]=-1;

	//memset(dp, -1, sizeof(dp));
	isprime[0] = isprime[1] = false;
	for(ll i=2; i*i<1001; i++)
	{
		if(isprime[i]==true)
		for(ll j=i*i; j<1001; j+=i)
			isprime[j]=false;
	}

	// index, haveastock, daywasindex
	cout<<findit(0, 0, 0);
}


	
