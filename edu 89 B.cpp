#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,x,m,n,z,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        vector<pair<int,int>>v;
        z=m;
        while(z--)
        {
            cin>>a>>b;
            v.push_back({a,b});
        }
        int mx=x,mn=x;
        int cnt =1;
        for(int i=0;i<m;i++)
        {
            if(v[i].first==mn&&v[i].second>mx)
            {
                cnt+= v[i].second-mx;
                mx=v[i].second;
            }
            else if(v[i].first<mn&&v[i].second==mx)
            {
                cnt+=mn-v[i].first;
                mn=v[i].first;
            }
            else if(v[i].first<mn&&v[i].second>mx)
            {
                cnt+=mn-v[i].first;
                cnt+= v[i].second-mx;
                mn=v[i].first;
                mx=v[i].second;
            }
            else if(v[i].first<mn&&v[i].second<mx&&v[i].second>mn)
            {
                cnt+=mn-v[i].first;
                mn=v[i].first;
            }
            else if(v[i].first>mn&&v[i].second>mx&&v[i].first<mx)
            {
                cnt+= v[i].second-mx;
                mx=v[i].second;
            }
            else if(v[i].second==mn)
            {
                cnt+= mn-v[i].first;
                mn=v[i].first;
            }
            else if(v[i].first==mx)
            {
                cnt+= v[i].second-mx;
                mx=v[i].second;
            }


        }
        cout<<cnt<<endl;
    }

}


