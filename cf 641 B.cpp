#include<bits/stdc++.h>
#define pq priority_queue<int, vector<int>, greater<int> >
using namespace std;
int  main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        unordered_map<int,int>mp;
        pq p;

        auto it =min_element(v.begin(),v.end());
        int pos = it-v.begin();
        p.push(v[pos]);
        int temp =v[pos];
        mp[v[pos]]=1;
        for(int i=pos+1;i<n;i++)
        {
            if(v[i]>temp && mp[v[i]]!=1)
            {
                p.push(v[i]);
                if(p.back()==v[i])
                    v2.push_back(i+1)
            }
        }
    }
}
