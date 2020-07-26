#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define umap unordered_map<pair<int,int>,int>
using namespace std;
int i;

void part(vector<int>&v,int l,int r,map<pair<int,int>,int> &mp,int i)
{
    int n=r,mid,temp; //cout<<"I come 1"<<endl;
    if(l==r)
    {
        pq.push_back({1,{l,r}});
        return;
    }
    else if((r-l+1)%2)
    {
        mid = (l+r)/2;
        int len = l-r+1;
        pq.push_back({len,mid})

    }
    else
    {
        mid = (l+r-1)/2;
        if(v[mid]==0)
          v[mid]=i;//cout<<"I come 4  i= "<<v[mid]<<" left= "<<l<<" right= "<<r<<endl;
        temp=i;
        i+=2;
        if(mp[{mid+1,n}]==0)
            {
               part(v,mid+1,n,mp,temp+1);
               mp[{mid+1,n}] =1;
            }
        else
            i--;
         if(mp[{1,max(1,mid-1)}]==0)
            {
               part(v,1,max(1,mid-1),mp,temp+2);
               mp[{1,max(1,mid-1)}] = 1;
            }
          else
           i--;


    }
}

int main()
{
    fast;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i=1;
        vector<int>v(n+1,0);
        int left =1,right=n;
        map<pair<int,int>,int> mp;
        part(v,left,right,mp,i);
        for(int j=1;j<=n;j++)
            cout<<v[j]<<" ";
        cout<<endl;

    }
}
