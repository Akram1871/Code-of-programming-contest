#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        char current='(';
        int cnt=0,cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==current)
            {
                cnt++;
                if(current=='(')
                   current = ')';
                else
                    current='(';
            }
        }
        for(int i=0,j=n-1;i<j;)
        {
            if(s[i]=='('&&s[j]==')')
            {
                cnt1++;
                i++;
                j--;
            }
            else if(s[i]=='(')
                        j--;
            else
                i++;
        }
        int ans = n-(2*cnt1);
        ans = ans/2;
        int ans2 = n-cnt;
        cout<<min(ans,ans2)<<endl;
    }
}
