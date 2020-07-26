#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s;
    set<string>ss;
    string a,b,res;
    int n,cnt_a=0,cnt_b=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ss.insert(a);
        s.push_back(a);
    }
    if(ss.size()==1)
        cout<<s[0]<<endl;
    else
    {
        sort(s.begin(),s.end());
        a=s[0];
        b=s[n-1];
        for(int i=0;i<n;i++)
        {
            if(s[i].compare(a)==0)
                cnt_a++;
            else
                cnt_b++;
        }
        res=(cnt_a>cnt_b)?a:b;
        cout<<res<<endl;
    }
}
