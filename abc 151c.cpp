#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,cnt2=0,a;
    bool vis[100005];
    string ss,s1="AC",s2="WA";
    vector<string>s;
    cin>>n>>m;
    int ar[n+2],num[m+2];
    for(int i=0; i<m; i++)
    {
        cin>>a>>ss;
        s.push_back(ss);
        num[i]=a;
        if(vis[a]==0&&ss.compare(s1)==0)
        {
            ar[a]=-1;
        }

    }
    for(int i=0; i<m; i++)
    {
        if(vis[num[i]]==0&&s[i].compare(s1)==0)
        {
            vis[num[i]]=1;
            cnt2++;
        }
        else if(vis[num[i]]==0&&s[i].compare(s2)==0&&ar[num[i]]==-1)
            cnt++;
    }
    cout<<cnt2<<" "<<cnt<<endl;
}
