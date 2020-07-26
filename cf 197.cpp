#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a=1,b;
    long long ans=0;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++)
        cin>>v[i];
    for(int i=0;i<m;i++)
    {
        b=v[i];
        if(a<=b)
            ans+=b-a;
        else
            ans+= (n-a+b);
        a=b;
    }
    cout<<ans<<endl;
}
