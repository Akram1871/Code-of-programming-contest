#include<bits/stdc++.h>
using namespace std;
// Driver function to sort the vector elements
// by second element of pairs
bool comp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.first > b.first);
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end(),comp);
    int i=0,temp;
    long long ans=0;
    while(n>0)
    {
        if(v[i].second>n)
            temp = n;
        else
            temp = v[i].second;
        ans+=temp*v[i].first;

        n= n-v[i].second;

        i++;
        if(i>=m)
            break;
    }
    cout<<ans<<endl;
}
