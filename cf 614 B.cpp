#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int n,i;
    double sum=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum+=(1.00/i*1.);
    }
    cout<<fixed<<setprecision(9)<<sum<<endl;

}

