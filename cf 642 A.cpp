#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
            cout<<0<<endl;
        else if((n==2))
            cout<<m<<endl;
        else
        {
            long long ans=2*m;
            cout<<ans<<endl;
        }

    }
}

