#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int n,mx=1,cnt;
    cin>>n;
    vector<int>v(n+5);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cnt=1;
        //cout<<"for "<<v[i]<<endl;
        for(int j=i;j<n-1;j++)
        {
            if(v[j]>=v[j+1])
                cnt++;
            else
                break;
        }
        for(int j=i;j>0;j--)
        {
            if(v[j]>=v[j-1])
                cnt++;
            else
                break;
        }
        if(cnt>mx)
            mx=cnt;
    }
    cout<<mx<<endl;
}
