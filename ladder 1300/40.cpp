#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    //char c;
    int sum=0,cnt=0;
    cin>>s;
    if(s.size()==1)
    {
        cout<<cnt<<endl;
         return 0;
    }
    xx:
    int len=s.size();
    sum=0;
    for(int i=0;i<len;i++)
    {

        sum+=(s[i]-'0');
    }
    s.erase();
    //cout<<sum<<endl;
    ostringstream str1;
    str1<<sum;
    s=str1.str();
    //cout<<s<<endl;
    //cout<<s[0]<<" mid "<<s.size()<<endl;
    if(s.size()==1)
    {
         cout<<cnt+1<<endl;
         return 0;
    }
    cnt++;
    goto xx;
    return 0;
}
