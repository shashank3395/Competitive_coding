#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,start=0,ending=0;
    cin>>t;
    while(t--)
    {
        int m,noe,nof,k;
        cin>>m>>noe>>nof;
        int beg=1,last=m,mid;
        while(beg<=last)
        {
            mid=(beg+last)/2;
            k=(int)ceil(mid/noe);
            int no=mid/k;
            if(mid%k!=0)
                no++;
            if(no<nof)
                last=mid-1;
            if(no>nof)
                beg=mid+1;
            if(no==nof)
                {beg=mid;
                start=beg;
                }

        }
        beg=1,last=m,mid;
        while(beg<=last)
        {
            mid=(beg+last)/2;
            k=(int)ceil(mid/noe);
            int no=mid/k;
            if(mid%k!=0)
                no++;
            if(no<nof)
                last=mid-1;
            if(no>nof)
                beg=mid+1;
            if(no==nof)
                { last=mid;
                 ending=last;
                }

        }
        cout<<ending-start+1<<"\n";
    }
}
