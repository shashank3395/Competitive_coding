#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      if(n==2010||n==2015||n==2016||n==2017||n==2019)
        printf("HOSTED\n");
      else
        printf("NOT HOSTED\n");
    }
}
