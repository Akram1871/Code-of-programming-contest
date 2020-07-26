#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="hello";
    int pos=0;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s1[pos]==s[i])
            ++pos;
    }
    if(pos==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
