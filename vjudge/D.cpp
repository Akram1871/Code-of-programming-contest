#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;
int main()
{
    int n;
    string s;
    map<string,int>mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<endl;
            mp[s]++;
        }

        else
        {
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
}
