#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int mx=0;
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int cnt=0,sum;
        for(int l=0;l<n;l++)
        {
            sum=0;
            for(int k=l;k<n;k++)
            {
                sum+=v[k];
                if(l==k)
                    continue;
                if(sum<=n){
                    mp[sum]=1;
                    //cout<<"sum "<<sum<<endl;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(v[i])!=mp.end())
                cnt++;
        }
        cout<<cnt<<endl;
    }
}
