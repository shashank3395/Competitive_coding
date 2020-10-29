#include<bits/stdc++.h>
#include<stack>

using namespace std;

vector< pair<long long int,long long int> > v[50001];
long long int n;
long long int distance1[50001];
long long int visited[50001];
void dfs(long long int i)
{
    stack< pair<long long int,long long int> > s;
    s.push(make_pair(i,distance1[i]));

    pair<long long int,long long int> k;
    vector< pair<long long int,long long int> >::iterator it;
    while(!s.empty())
    {   k=s.top();
        s.pop();
        visited[k.first]=1;
        for(it=v[k.first].begin();it!=v[k.first].end();it++)
        {
            if(visited[(*it).first]==0)
            {
                distance1[(*it).first]=distance1[k.first]+(*it).second;
                s.push(make_pair((*it).first,distance1[(*it).first]));
            }
        }
    }
}

int main()
{
    int t;

    long long int a,b,c;
    cin>>t;
    while(t--)
    {
            for(int i=0;i<=50000;i++)
                v[i].clear();
            cin>>n;
            for(int i=0;i<n-1;i++)
            {
              cin>>a>>b>>c;

              v[a].push_back(make_pair(b,c));
              v[b].push_back(make_pair(a,c));
            }
            for(int i=0;i<=50000;i++)
            {
                distance1[i]=10000000000000000;
                visited[i]=0;
            }

            distance1[1]=0;
            long long int h=1;
            dfs(h);
            long long int max1=0;
            long long int node=1;
            for(int i=1;i<=n;i++)
            {
                if(distance1[i]>max1)
                {   max1=distance1[i];
                    node=i;
                }

            }



            for(int i=0;i<=50000;i++)
            {
                distance1[i]=100000000000000000;
                visited[i]=0;
            }
            distance1[node]=0;

            dfs(node);
            max1=0;
            node=1;
            for(int i=1;i<=n;i++)
            {
                if(distance1[i]>max1)
                {   max1=distance1[i];
                    node=i;
                }

            }
            cout<<max1<<"\n";
    }
}
