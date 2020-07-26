#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sol(ll l,ll lcm,ll mx);
int main()
{
    ll a,b,x,q,t,gcd,lcm,mx;
    ll l,r;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>q;
        if(a>b)swap(a,b);
        gcd =  __gcd(a, b);
        lcm = (a*b)/gcd;
        mx = b;
        for(ll i=0;i<q;i++)
        {
            cin>>l>>r;
            if(mx==lcm || r<mx)
                cout<<0<<endl;
            else
            {
                ll ans=0;
                ans+= sol(r,lcm,mx);
                if(l>1)
                    ans-= sol(l-1,lcm,mx);
                cout<<ans<<" ";

            }
        }
        cout<<endl;

    }
}
ll sol(ll l,ll lcm,ll mx)
{
    ll block = l/lcm;
    ll have = lcm*block;
    ll total = l;
    if(block!=0)
    {
        total-=min(mx,l-have+1);
        total-=(block-1)*mx;
    }
    return total - min(l,mx-1);


}
