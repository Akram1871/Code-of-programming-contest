#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n0,n1,n2;
    cin>>t;
    while(t--)
    {
        cin>>n0>>n1>>n2;
        string s;
        if(n2!=0)
        {
            for(int i=0;i<=n2;i++)
                s+='1';
            if(n1!=0)
            {
                for(int i=1;i<=n1;i++)
                {
                    if(i%2)
                        s+='0';
                    else
                        s+='1';
                }
            }
            if(n0!=0)
            {
                if(n1%2)
                {
                   for(int i=0;i<n0;i++)
                        s+='0';
                }
                else
                {
                    for(int i=0;i<=n0;i++)
                        s+='0';
                }
            }
        }
        else
        {
           if(n1!=0)
            {
                for(int i=1;i<=n1+1;i++)
                {
                    if(i%2)
                        s+='0';
                    else
                        s+='1';
                }
            }
            if(n0!=0)
            {
                if(n1%2)
                {
                   for(int i=0;i<n0;i++)
                        s+='0';
                }
                else
                {
                    for(int i=0;i<=n0;i++)
                        s+='0';
                }
            }
        }
        cout<<s<<endl;

    }
}
