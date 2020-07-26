#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,rnk;
    map<string,pair<int,int>>mp;
    map<string,int>mp2;
    set<string>se;
    string s,ans;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s>>x;
        se.insert(s);
        if(mp2[s]<(mp[s].first+x))
        {
            mp2[s]=mp[s].first+x;
            mp[s]=make_pair((mp[s].first+x),i);
        }

        else
            mp[s]=make_pair((mp[s].first+x),mp[s].second);
    }
    auto it = se.begin();
    ans=*it;
    int mx=mp[*it].first;
    for(it=++se.begin();it!=se.end();it++)
    {
        if(mp[*it].first>mx)
        {
            mx=mp[*it].first;
            ans=*it;
        }
        else if(mp[*it].first==mx)
        {
            //cout<<mp[ans].second<<" "<<mp[*it].second<<endl;
            ans=(mp[*it].second<mp[ans].second)?*it:ans;

        }
    }
    cout<<ans<<endl;
}
