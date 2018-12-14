#include<bits/stdc++.h>

using namespace std;
vector<pair<long long int,long long int> > v;
long long int findinit(long long int n)
{  // cout<<"we are in findit\n";
    vector<pair<long long int,long long int> >:: iterator it=v.begin();
    for(;it!=v.end();it++)
        if((*it).first==n)
         return 1;
    return 0;
}
long long int found(long long int n)
{
    vector<pair<long long int,long long int> >:: iterator it=v.begin();
    for(;it!=v.end();it++)
        if((*it).first==n)
        {  // cout<<"\nthis is value precalculated:"<<(*it).second;
            return (*it).second;
        }

}
long long maxk(long long s1,long long s2,long long s3,long long s4,long long s5,long long s6,long long s7,long long s8)
{
    return max(s1,max(s2,max(s3,max(s4,max(s5,max(s6,max(s7,s8)))))));
}
long long int findit(long long int n)
{
    if(n<=11)
        return n;
    else if(findinit(n))
           {  // cout<<"&";
               return found(n);
           }
    else
    {   //cout<<"-";


        long long int s1=findit(n/4)+findit(n/3)+findit(n/2);
        //long long int s2=n/2+findit(n/3,v)+findit(n/4,v);
        //long long int s3=n/3+findit(n/2,v)+findit(n/4,v);
        //long long int s4=n/4+findit(n/3,v)+findit(n/2,v);
        //long long int s5=n/2+n/3+findit(n/4,v);
        //long long int s6=n/2+n/4+findit(n/3,v);
        //long long int s7=n/4+n/3+findit(n/2,v);
        //long long int s8=n/2+n/3+n/4;
        pair<long long int,long long int> p1;
        p1.first=n;
        p1.second=s1;
        v.push_back(p1);
        return p1.second;
    }

}
int main()
{
    int t=10;

    while(t--)
    {
        long long int n;

        scanf("%lld",&n);
        printf("%lld\n",findit(n));
    }
}
