#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>v;
        set<int >s;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            s.insert(x);
        }
        if(s.size()>m)
            cout<<-1<<endl;
        else
        {
            vector<int>v2(s.begin(),s.end());
            int len =s.size();
            for(int i=len;i<=m;i++)
                v2.push_back(1);
            cout<<n*m<<endl;
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                  cout<<v2[j]<<" ";
            cout<<endl;
        }
    }
}

