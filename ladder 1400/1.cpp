#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);

using namespace std;
int main()
{
    fast;

    int n,k,cnt=0;
    cin>>n>>k;
    int a[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(5-a[i]>=k)
            cnt++;
    }

    cout<<cnt/3<<endl;

    return 0;

}
