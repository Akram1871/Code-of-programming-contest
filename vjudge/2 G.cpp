#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,difs;
    cin>>t;
    while(t--)
    {
        string s;
    cin>>s;
    long int n=s.length();
    int notify=n%26;
    for(long int i=0;i<n;i++)
    {

            if(s[i]+notify>'z')
            {
                difs=(s[i]+notify)-'z';
                s[i]='a'+difs-1;
            }
            else
                s[i]=s[i]+notify;
    }
    cout<<s<<endl;
    }

}
