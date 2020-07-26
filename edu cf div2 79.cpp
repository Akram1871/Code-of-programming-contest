#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;

   long int t,r,g,b,rem,rem2,rem3;
   int ar[3];
    cin>>t;
    while(t--)
    {
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        rem=ar[2]-(ar[1]+ar[0]);
        if(rem<=1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }



    return 0;

}

