#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,ans;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cin>>m;
    vector<int>b;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        b.push_back(x);
    }
    map<int,int>mp;
    vector<int>rat;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]%a[i]==0)
            {
                ans=b[j]/a[i];
                rat.push_back(ans);
                mp[ans]++;
            }
        }
    }
    sort(rat.begin(),rat.end());
    int len = rat.size();
    cout<<mp[rat[len-1]]<<endl;
}
