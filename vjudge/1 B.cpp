#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    fast;
     int n,cnt=0,cnt1=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            cnt++;
        else
            cnt1++;
    }
        cout<<abs(cnt-cnt1)<<endl;



}

