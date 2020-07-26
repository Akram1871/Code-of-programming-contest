#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    fast;
     int t,n,m,sum,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        if(n%2==0)
        {
            if(n%m==0)
              cout<<"YES\n";
        else
          cout<<"NO\n";
        }

        else
        {
            if(m==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

     }


}

