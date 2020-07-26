#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int a,n,t,cnt,cnt1;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cnt1=0;
        cin>>n;

        while(n--)
        {
            cin>>a;
            if(a%2==0)
                cnt++;
            else
                cnt1++;
        }
        if(cnt==0||cnt1==0)
             cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }



}

