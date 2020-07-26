
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
#define INF 9,223,372,036,854,775,807
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a(n+1);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<string>s(n+1);
        char ss='a';

            for(int j=0; j<a[0]; j++)
            {
                cout<<'a';
                s[0]+='a';
            }
            cout<<endl;

        for(int i=0; i<n; i++)
        {
            if(a[i]!=0)
            {

                else
                {
                    int mx=(a[i]-a[i-1]);
                    cout<<s[i-1];
                    s[i]+=s[i-1];
                    if(mx>0)
                    {
                        ss++;
                        if(ss>'z')
                            ss='a';
                        for(int j=0; j<mx; j++)
                        {
                            s[i]+=ss;
                            cout<<ss;
                        }

                    }
                    cout<<endl;

                }
            }

            else
            {
                ss++;
                if(ss>'z')
                    ss='a';
                cout<<ss<<endl;
                s[i]+=ss;
            }


        }
        if(a[n-1]!=0)
        {
            int len =s[n-1].size();
            int mn = min(len,a[n-1]);
            for(int i=0; i<mn; i++)
                cout<<s[n-1][i];
            cout<<endl;
        }
        else
        {
            ss++;
            if(ss>'z')
                ss='a';
            cout<<ss<<endl;
        }

    }


}
