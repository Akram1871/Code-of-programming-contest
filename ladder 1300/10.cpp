#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int n;
    cin>>n;
    double sum=0,a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=(a*1./100*1.);
    }
    cout<<fixed<<setprecision(9)<<(sum/n*1.)*100<<endl;

}
