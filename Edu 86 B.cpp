#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int len = s.size(),cnt=0,cnt2=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='0')
                cnt++;
            else
                cnt2++;
        }
        string ans;
        ans+=s[0];
        if(s[0]=='0')
            ans+=s[0]+1;
        else
            ans+=s[0]-1;
        if(cnt2==0||cnt==0)
            cout<<s<<endl;
        else
        {
            for(int i=0; i<len; i++)
                cout<<ans;
            cout<<endl;
        }

    }
}
