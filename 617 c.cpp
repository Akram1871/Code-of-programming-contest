#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,mx,cnt,res1,res2;
    string s;
    map<int,pair<int,int>>mp;
    cin>>t;
    while(t--)
    {
        x=0,y=0;
        mp[0]=make_pair(0,0);
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
                mp[i+1]=make_pair(--x,y);//cout<<i<<" iam "<<endl;}
            else if(s[i]=='R')
                 mp[i+1]=make_pair(++x,y);
            else if(s[i]=='U')
                 mp[i+1]=make_pair(x,++y);
            else if(s[i]=='D')
                 mp[i+1]=make_pair(x,--y);

                 //cout<<x<<" x"<<y<<" y"<<endl;
        }
        mx=INT_MAX;
        res1 =0,res2=0;
        for(int i=0;i<=n-1;i++)
            for(int j=i+1;j<=n;j++)
            {
                if(mp[i].first==mp[j].first && mp[i].second==mp[j].second )
                {
                    cnt = j-i;
                    if(mx>cnt)
                    {
                        //cout<<mp[i].first<<" m"<<mp[i].second<<" i "<<i<<" j "<<j<<endl;
                        res1=i+1;
                        res2=j;
                        mx=cnt;
                    }

                }
            }
            if(res1==0 & res2==0)
                cout<<"-1\n";
            else
                cout<<res1<<" "<<res2<<endl;

    }
}
