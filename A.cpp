#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.size();
    int cnt=0,flg=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='4')
            cnt++;
        else
            cnt=0;
        if(s[0]=='4')
        {
            flg=1;
            cout<<"NO"<<endl;
            break;
        }
        else if(s[i]!='4'&&s[i]!='1')
        {
            flg=1;
            cout<<"NO"<<endl;
            break;
        }
        else if(cnt>=3)
        {
            flg=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(!flg)
     cout<<"YES"<<endl;
}
