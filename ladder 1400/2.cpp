#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
using namespace std;
int main()
{
    fast;
    ll n;
    int a=4,b=7,r,cnt=0,cnt2=0;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        if(r==a||r==b)
            cnt++;
        n=n/10;
    }
    if(cnt==0)
        cnt2++;
    while(cnt!=0)
    {
        r=cnt%10;
        if(r!=a&&r!=b)
            cnt2++;
        cnt=cnt/10;
    }
//cout<<cnt2<<"cnt2\n";
    if(cnt2==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;

}

