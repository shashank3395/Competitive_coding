#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int arr[126]={0};
    if(str.size()>62)
        cout<<-1;
    else
    {
        for(int i=0;i<str.size();i++)
        {  int index=(int)str[i];
           arr[index]++;

        }
        int count1=0;
        for(int i=0;i<126;i++)
        {
            if(arr[i]!=0&&arr[i]!=1)
                count1+=(arr[i]-1);
        }

        cout<<count1;
    }
}
