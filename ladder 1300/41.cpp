#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    map<char,int>mp;
    string s;
    cin>>k>>s;
    set<char>se(begin(s),end(s));
    sort(s.begin(),s.end());

    n=s.size();
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    for(auto it:se)
    {
        if(mp[it]<k || mp[it]%k!=0)
        {
            cnt=1;
            break;
        }
    }
    if(cnt)
        cout<<-1<<endl;

     else
     {
         for(int i=0;i<k;i++)
         {
             for(auto it:se)
                for(int j=0;j<(mp[it]/k);j++)
                     cout<<it;
         }
         cout<<endl;
     }
}
