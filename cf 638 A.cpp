#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binpow(ll a, ll b)
{
    if(b==0)
        return 1;
    ll res = binpow(a,b/2);
    if(b%2)
        return res*res*a;
    else
     return res*res;
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int mid = n/2;
        ll a=0,b=0;
        a+=binpow(2,n);
        for(int i=1;i<mid;i++)
        {
            a+=binpow(2,i);
        }
        for(int i=mid;i<=n-1;i++)
        {
            b+=binpow(2,i);
        }

        ll dif = (a>b)?(a-b):(b-a);
        cout<<dif<<endl;
    }
}
