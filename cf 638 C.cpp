#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int cnt=0;
        string s;
        cin>>s;
        sort(s.begin(),s.end());

        if(s[0]!=s[k-1])
            cout<<s[k-1]<<endl;
        else if(s[0]==s[n-1])
          {
            for(int i=0;i<(n-1+k)/k;i++)
                cout<<s[0];
            cout<<endl;
          }
        else
        {
            cout<<s[0];
            if(s[k]!=s[n-1])
            {
                for(int i=k;i<n;i++)
                  cout<<s[i];
                 cout<<endl;
            }
            else
            {
                for(int i=0;i<(n-1)/k;i++)
                    cout<<s[n-1];
                cout<<endl;
            }

        }
    }
}
