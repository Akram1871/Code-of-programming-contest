#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0,temp=0,flg=0;
    cin>>s;
    int n= s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]-'0'==temp)
        {
            cnt++;
        }
        else{
            temp = s[i]-'0';
            cnt=1;
        }
        if(cnt==7)
        {
            cout<<"YES"<<endl;
            flg=1;
            break;
        }
    }
    if(!flg)
        cout<<"NO"<<endl;
}
