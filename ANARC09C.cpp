#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<iterator>
#include<map>

using namespace std;
int main()
{
  int sieve[500000]={0};
  sieve[1]=1;
  sieve[0]=1;

  for(int i=2;i<sqrt(500000);i++)
  {
      if(sieve[i]==0)
      {
          for(int j=i;j*i<500000;j++)
            sieve[i*j]=1;
      }
  }
  //for(int i=0;i<200;i++)
    //if(sieve[i]==0)
    //out<<i;
  int a,b,c,d,count=1;
  cin>>c>>d;
  while(c!=0&&d!=0)
  {

      vector<int> vc;
      vector<int> vd;
      int i=0;
      while(c!=1)
      {
          if((sieve[i]==0)&&(c%i==0))
            {
                vc.push_back(i);
                c/=i;
            }
          else
            i++;
      }
      vc.push_back(1);
      i=0;
      while(d!=1)
      {
          if(sieve[i]==0&&(d%i==0))
            {
                vd.push_back(i);
                d/=i;
            }
          else
            i++;
      }
      vd.push_back(1);
      vector<int>:: iterator it;

   // for(it=vc.begin();it!=vc.end();it++)
     //   cout<<*it<<" ";cout<<"\n";
     //for(it=vd.begin();it!=vd.end();it++)
       // cout<<*it<<" ";cout<<"\n";

  /*    map <int, int> num1;
      map <int, int> num2;
     // vector<int>:: iterator it;
         int k=*(vc.begin());
         int countit=0;
      for(it=vc.begin();it!=vc.end();it++)
      {
          if(*it==k)
          {
              countit++;
          }
          else{
             num1.insert(pair <int, int> (k,countit));
             countit=0;
             k=*it;
             it--;
          }
      }
      num1.insert(pair <int, int> (k,countit));

     // map<int,int> :: iterator mq;
      //for(mq=num1.begin();mq!=num1.end();mq++)
       // cout<<mq->first<<" "<<mq->second;

        k=*(vd.begin());
        countit=0;
      for(it=vd.begin();it!=vd.end();it++)
      {
          if(*it==k)
          {
              countit++;
          }
          else{
             num2.insert(pair <int, int> (k,countit));
             countit=0;
             k=*it;
             it--;
          }
      }
         num2.insert(pair <int, int> (k,countit));

      map <int, int>:: iterator itc;
      map <int, int>:: iterator itd;
      int flag=0;
      for(itc=num1.begin();itc!=num1.end();itc++)
      {   flag=0;
          for(itd=num2.begin();itd!=num2.end();itd++)
          {
              if(itd->first==itc->first)
              {
                  (*itd).second=abs((*itc).second-(*itd).second);
                  flag=1;
                  break;
              }

          }
          if(flag==0)
              num2.insert(pair <int, int> (itc->first,itc->second));
      }

      int countdiff=0;
      int ansprint=0;
      for(itd=num2.begin();itd!=num2.end();itd++)
      {
          countdiff++;
          ansprint+=itd->second;
      }
      printf("%d. %d:%d\n",count,countdiff-1,ansprint);
      cin>>c>>d;
      count++;*/
  }
}
