#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        char start=str[0];
        char last=str[str.length()-1];
        int countr=0,countg=0,count1=0;
        for(int i=0;i<str.length()-1;i++)
        {
            if(str[i]==str[i+1]&&str[i]=='R')
                {count1++;
                 countr++;
                }
            if(str[i]==str[i+1]&&str[i]=='G')
                {count1++;
                 countg++;
                }
        }
        if(last==start&& last=='R')
            {
                count1++;
                countr++;
            }
        if(last==start&& last=='G')
            {
                count1++;
                countg++;
            }
            if(count1==2||count1==0)
            {
                if(count1==0)
                    cout<<"yes\n";
                else{
                    if(countg!=countr)
                        cout<<"no\n";
                    else
                        cout<<"yes\n";
                }
            }
            else
                cout<<"no\n";


    }
}
