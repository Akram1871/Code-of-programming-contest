#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0;i<k;i++)
            if(a[i]<b[i])
            swap(a[i],b[i]);
        long long sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;
    }
}

