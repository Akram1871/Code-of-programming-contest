#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
bool comp(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second!=b.second)
        return a.first<b.first;
}
int main()
{
    fast;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b,cnt1=0,cnt0=0;
        vector<pair<int,int>>v,v2;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b;
            if(b==1)
                cnt1++;
            else
                cnt0++;
            v.push_back({a[i],b});
        }
        int loop=0,flg=0;
        if(cnt0==0||cnt1==0)
        {
            loop=1;
            for(int i=1; i<n; i++)
            {
                if(v[i].first<v[i-1].first)
                {
                    flg=1;
                    break;
                }
            }
        }

        if(!loop)
            cout<<"YES"<<endl;
        else if(flg)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }

}

