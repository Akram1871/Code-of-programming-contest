#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n,a,b,c,d,mid,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        mid=n/2;  cout<<"mid = "<<mid<<endl;
        sum=(a+b+c+d+1);
        if(sum>mid)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;

}

