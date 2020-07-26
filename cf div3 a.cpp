#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;

    int t,h,m,tm;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        tm=((h+1)*60)-(60-m);
        cout<<1440-tm<<"\n";
    }



    return 0;

}

