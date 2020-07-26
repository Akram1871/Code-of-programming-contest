#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,f,t;
    vector<int>v;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        if(t>k)
            v.push_back(f-(t-k));
        else
            v.push_back(f);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
}
