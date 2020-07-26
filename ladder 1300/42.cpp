#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    vector<int>v;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int min=INT_MAX;
    for(int i=0;i<=(m-n);i++)
    {
        for(int j=(i+n-1);j<m;j++ )//{
          if(v[j]-v[i]<min)
             min=v[j]-v[i];
             //cout<<v[i]<<" iii "<<v[j]<<" ii"<<min<<endl;}
    }
    cout<<min<<endl;
}
