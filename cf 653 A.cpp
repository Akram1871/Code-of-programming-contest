#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        int a = (n-y)/x;
        int ans = (a*x)+y;
        cout<<ans<<endl;
    }
}
