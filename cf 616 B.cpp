#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,res;
    set<int>s;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
            v.push_back(x);
        }
        if(s.size()==n)
            cout<<"YES\n";
        else if(s.size()!=1)
        {
            auto it=s.begin();
            auto it1=it;
            for(it++;it!=s.end();it++)
            {
                if(*it-*it1<=1)
                {
                    res=1;
                    break;
                }
                res=0;
            }
            if(res)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else if(s.size()==1&&v.size()<=2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        s.clear();
        v.clear();

    }
}
