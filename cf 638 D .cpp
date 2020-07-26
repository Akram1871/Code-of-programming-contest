#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binpow(ll a,ll b)
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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
       // int ans = 1+log2((n+1)/2);
       // cout<<ans<<endl;
        vector<ll>v;
        ll sum =0,temp;
        for(int i=0;sum<=n;i++)
        {
            temp = binpow(2,i);
            sum+=temp;
            v.push_back(temp);//cout<<" temp "<<temp<<endl;
        }
        sum-=temp; //cout<<"sum : "<<sum<<endl;
        if(sum<n)
        {
            v.pop_back();
            v.push_back(n-sum);
            sort(v.begin(),v.end());
        }
        else
            v.pop_back();
        cout<<v.size()-1<<endl;
        for(int i=0;i<v.size()-1;i++)
              cout<<v[i+1]-v[i]<<" ";
              cout<<endl;
    }
}
