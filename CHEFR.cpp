#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int a[n];
      int count1=0;

      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]!=1)
            count1++;
      }
      if(k>=count1)
        printf("YES\n");
      else
        printf("NO\n");
  }
}
