#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int n,a,cnt=1;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<=n-3;i++)
    {
       if(v[i]+v[i+1]>v[i+2]&&v[i]+v[i+2]>v[i+1]&&v[i+2]+v[i+1]>v[i])
         {
             cnt=0;
             break;
         }
    }
    if(cnt)
      cout<<"NO\n";
    else
       cout<<"YES\n";


}

