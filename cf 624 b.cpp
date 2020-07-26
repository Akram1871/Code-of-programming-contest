#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,x;
    cin>>t;
    while(t--)
    {
        vector<int>v,v1,p;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<m;i++)
        {
            cin>>x;
            p.push_back(x);
        }
        sort(p.begin(),p.end());
        sort(v1.begin(),v1.end());

        if(p[m-1]+1==n && p[0]==1)
            cout<<"YES"<<endl;
        else
        {
            int ini=p[0],last=p[m-1];
            if(last==n-1)
            {
                for(int i=1;i<ini-1;i++)
                    if(v[i]<v[i-1])
                      cnt=1;//no
                if(cnt)
                    cout<<"NO"<<endl;
                else
                   cout<<"YES"<<endl;
            }
            else if(ini==0)
            {
                for(int i=n-1;i>last-1;i++)
                    if(v[i]<v[i-1])
                      cnt=1;//no
                if(cnt)
                    cout<<"NO"<<endl;
                else
                   cout<<"YES"<<endl;
            }
        }
            cout<<"NO"<<endl;

    }
}
