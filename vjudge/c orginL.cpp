#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int n,m,x,res,mid;
    vector<int>mod(1000009);
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i==0)
        {
            a[i]=x;
            fill(mod.begin(),mod.begin()+x,i+1);
        }

        else
        {
            a[i]=a[i-1]+x;
            fill(mod.begin()+a[i-1],mod.begin()+a[i],i+1);
             //memset(mod+a[i-1],i+1,sizeof(mod+a[i]));
        }

    }

    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;

        cout<<mod[x-1]<<"\n";
    }



}
