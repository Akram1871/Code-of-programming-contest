#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt,pos;
    string s;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if((s[i]-'0')%2!=0)
                cnt++;
        }
        if(cnt==0||cnt==1)
             cout<<"-1\n";
        else if(cnt%2==0)
        {
            for(int i=n-1;i>=0;i--)
            {
               if((s[i]-'0')%2!=0)
                {

                    break;
                }
              else
                s.erase(i);
            }
            cout<<s<<endl;

        }
        else if(cnt!=1 && cnt%2!=0)
        {
           for(int i=n-1;i>=0;i--)
            {
               if((s[i]-'0')%2!=0)
                {
                    s.erase(i);
                    break;
                }
            }
            for(int i=(s.size()-1);i>=0;i--)
            {
               if((s[i]-'0')%2!=0)
                {
                    break;
                }
              else
                s.erase(i);
            }
            cout<<s<<endl;
        }

    }

}
