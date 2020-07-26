#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
#define INF 9,223,372,036,854,775,807
typedef long long ll;
using namespace std;
int main()
{
    fast;
    int n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        vector<int>result;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        int upper =0,down=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i]==b[j])
                {
                    result.push_back(a[i]);
                    down=1;
                    break;
                }
            }
            if(down==1)
                break;
        }
        int len = result.size();
        if(len==1)
        {
            cout<<"YES"<<endl;
            cout<<len;
            for(int i=0; i<len; i++)
                cout<<" "<<result[i];
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


}

