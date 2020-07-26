#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    long n,ans,ans2;
    long mod = 1e9+7;
    cin>>n;
    ans = n%6;
    if(ans==1)
        ans2=x;
    else if(ans==2)
        ans2=y;
    else if(ans==3)
        ans2=y-x;
    else if(ans==4)
        ans2=-x;
    else if(ans==5)
        ans2=-y;
    else
        ans2=x-y;
    ans2 = ans2%mod;
    if(ans2<0)
        ans2 = mod+ans2;
    cout<<ans2<<endl;
}
