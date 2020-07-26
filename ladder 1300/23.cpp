#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n,x,cnt_5=0,cnt_0=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==5)
            cnt_5++;
        else
            cnt_0++;
    }
    if(!cnt_0)
        cout<<"-1"<<endl;
    else if(cnt_5<9)
        cout<<"0"<<endl;
    else
    {
        int len=n-(cnt_5%9)-cnt_0;
        for(int i=1;i<=len;i++)
            cout<<"5";
        for(int i=1;i<=cnt_0;i++)
            cout<<"0";
        cout<<endl;
    }

}

