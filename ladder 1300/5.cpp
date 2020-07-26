#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    cin>>s;
    int len = s.size();
    for(int i=0;i<len;i++)

        {
            if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
            {
                cnt =1;
                break;
            }
        }
        if(cnt)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}
