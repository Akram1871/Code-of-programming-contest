#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        int mn=a-b;
        int mx=c+d;
        int maximum=mx/mn;
        mn=a+b;
        mx=c-d;
        int minimum = mx/mn;
        if(mx%mn)
            minimum++;
        if(n<=maximum && n>=minimum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
       // cout<<mx<<" "<<mn<<endl;
    }
}
