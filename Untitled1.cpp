#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n;
    string s1,s2;
    cin>>n;
    cin>>s1;
    cin>>s2;
    int k=0;
    for(i=0;i<n;i++)
      {
          if(s1[i]==s2[i])
            k++;

      }
      long long int ans=1;

      for(i=0;i<n-k;i++)
      {
          ans=((ans%1000000007)*(2))%1000000007;
      }
      cout<<ans;

}
