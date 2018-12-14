#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,m;
    cin>>n>>m;
    int chess[n][m];
    char set1[m];
    for(i=0;i<n;i++)
        {
            cin>>set1;
          for(int j=0;j<m;j++)
              chess[i][j]=(int)(set1[j]-'0');
        }
    int maxsize=min(m,n);
    int x=0,j;
    int y=0;
    vector<int> v1,v2,v3;
    int currentsize=maxsize;
    for(;;)
    {

       int replaceit=0;
       for(i=x;i<x+currentsize;i++)
       {   int currentvalue=((i+y)%2==0)?1:0;
           for(j=y;j<y+currentsize;j++)
           {
               if(chess[i][j]==currentvalue);
               else
                replaceit++;
               // cout<<"current value is"<<currentvalue<<"\n";
                currentvalue=(++currentvalue)%2;
           }
       }
       //cout<<"x is"<<x<<"\n";
       //cout<<"y is"<<y<<"\n";
       //cout<<"replaceit is"<<replaceit<<"\n";
       v1.push_back(replaceit);
       y++;
       if(y+currentsize>m)
       {
           y=0;
           x++;
           if(x+currentsize>n)
           {
               currentsize--;
               x=0;
               y=0;
               sort(v1.begin(),v1.end());
               v2.push_back(*v1.begin());
               v1.clear();
               if(currentsize==0)
                break;
           }
       }



    }
    v1.clear();

    x=0;
    y=0;
    currentsize=maxsize;
    for(;;)
    {

       int replaceit=0;
       for(i=x;i<x+currentsize;i++)
       {   int currentvalue=((i+y)%2==0)?0:1;
           for(j=y;j<y+currentsize;j++)
           {
               if(chess[i][j]==currentvalue);
               else
                replaceit++;
                //cout<<"current value is"<<currentvalue<<"\n";
                currentvalue=(++currentvalue)%2;
           }
       }
       //cout<<"x is"<<x<<"\n";
       //cout<<"y is"<<y<<"\n";
       //cout<<"replaceit is"<<replaceit<<"\n";
       v1.push_back(replaceit);
       y++;
       if(y+currentsize>m)
       {
           y=0;
           x++;
           if(x+currentsize>n)
           {
               currentsize--;
               x=0;
               y=0;
               sort(v1.begin(),v1.end());
               v3.push_back(*v1.begin());
               v1.clear();
               if(currentsize==0)
                break;
           }
       }



    }



    int q;
    vector<int>::iterator it;
    vector<int>::iterator it2;
    //for(it=v2.begin();it!=v2.end();it++)
      //  cout<<"--"<<*it<<"\n";
    cin>>q;
    int f[q];
    for(int l=0;l<q;l++)
        cin>>f[l];
    sort(v2.begin(),v2.end());
   sort(v3.begin(),v3.end());

   int l=0;
    int c;
    while(q--)
    {   c=f[l];
        it=upper_bound(v2.begin(),v2.end(),c);
        it2=upper_bound(v3.begin(),v3.end(),c);

           cout<<max(it-v2.begin(),it2-v3.begin())<<"\n";
           //cout<<it-v2.begin()<<"\n";
            l++;

    }
}
