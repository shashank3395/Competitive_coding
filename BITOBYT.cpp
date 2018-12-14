#include<iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    long long int t,n;
    long long fans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int powe=n/26;
        long long int dec=n%26;
        if(dec>0&&dec<=2){fans=pow(2,powe);

            cout<<fans<<" ";
        }
        else
            cout<<0<<" ";

        if(dec>2&&dec<=10){
                fans=pow(2,powe);
            cout<<fans<<" ";
        }
        else
            cout<<0<<" ";

        if((dec>10&&dec<26)||(dec==0))
        {   if(dec!=0){
            fans=pow(2,powe);
            cout<<fans<<" "<<endl;
        }
            if(dec==0){
            fans=pow(2,powe-1);
            cout<<fans<<" "<<endl;
            }
        }
        else
            cout<<0<<" "<<endl;



    }
}
