#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
bool gcd(int a,int b)
{
    int mx,lo,rem;
    if(a>b)
    {
        mx=a;
        lo=b;
    }
    else
    {
        mx=b;
        lo=a;
    }
    while(lo!=0)
    {
        rem=mx%lo;
        mx=lo;
        lo=rem;
    }
    if(mx!=1)
        return true;
    else
        return false;
}
int main()
{
    fast;
    int a,x,y,n;
    cin>>a;
    while(a--)
    {
        cin>>x>>y;
        if(x==1||y==1)
            cout<<"Finite\n";
        else if(x-y==0)
            cout<<"Infinite\n";
        else
        {
            if(gcd(x,y))
                cout<<"Infinite\n";
            else
                cout<<"Finite\n";

        }
    }
}
