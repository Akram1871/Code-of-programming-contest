#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,x,y,cnt=0;
    vector<pair<int,int>>v;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    //for(auto i=0;i<n;i++)
        //cout<<v[i].first<<" "<<v[i].second<<endl;
    for(int i=0;i<n;i++)
    {
        if(s>v[i].first)
        {
            s+=v[i].second;
            cnt++;
        }
        else
            break;
    }
    if(cnt==n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
