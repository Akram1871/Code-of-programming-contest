
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int n,t,cnt;
    cin>>t;
    while(t--)
    {
         cin>>n;
         if(n==1)
            cout<<-1<<endl;
         else
         {
             cout<<2;
             for(int i=0;i<n-1;i++)
                cout<<7;
             cout<<endl;
         }


    }




}
