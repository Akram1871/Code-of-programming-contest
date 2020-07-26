#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int n,m,x,ans,t;
    ll sum=0;
    cin>>t;
    while(t--)
    {
  cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
 ans=sum>m?m:sum;
    cout<<ans<<endl;
    }

}

