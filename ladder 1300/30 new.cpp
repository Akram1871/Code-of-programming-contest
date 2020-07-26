#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main ()
{
    fast;
    int n,m,x;
    long long int sum=0,sum1=0;
    cin>>n;
    vector<int>v;
    v.push_back(-1);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        auto pos = find(v.begin(),v.end(),x);
        //cout<<"hey "<<pos-v.begin()<<endl;
        sum+=pos-v.begin();
        sum1+=n-(pos-v.begin()-1);
    }
    cout<<sum<<" "<<sum1<<endl;
}
