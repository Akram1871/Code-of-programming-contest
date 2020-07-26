#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,x,y;
    unsigned long long ans,a,b,frac;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        int dif = abs(x-y);
        if(x>y)
            frac=y;

        else
            frac=x;
       unsigned long long temp =((b*frac)<(2*frac*a))?(b*frac):(2*frac*a);
        ans =(a*dif)+temp;
        cout<<ans<<endl;

    }
}
