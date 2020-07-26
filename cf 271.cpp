#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int n,m,len;
    int sum=1,a;
    cin>>n;
    //unordered_map<int,int>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        v[i]=sum;
        //cout<<v[i]<<" ";
    }
    /*for(int i=1;i<=v[0];i++)
        mp[i]=1;
    for(int i=1;i<n;i++)
    {
        len = v[i];
        for(int j=v[i-1]+1;j<=len;j++)
            mp[j]=i+1;
    }*/
    cin>>m;
    vector<int>query(m);
    for(int i=0;i<m;i++)
    {
        cin>>query[i];
    }
    for(int i=0;i<m;i++)
    {
        auto it = upper_bound(v.begin(),v.end(),query[i])-v.begin()+1;
        cout<<it<<endl;

    }

}
