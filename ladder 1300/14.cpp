#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    string s;
    cin>>n>>s;
    int len = s.size();
    for(int i=1;i<len;i++)
    {
        if(s[i]==s[i-1])
            cnt++;
    }
    cout<<cnt<<endl;
}
