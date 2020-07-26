#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n][m],b[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>x;
                a[i][j]=x;
                b[i][j]=x;
            }
        }
        int cnt=0;
        int i=0,j=0;
        while(i!=n&&j!=m)
        {
           if(a[i][j])
        }

        ///

        int ans = min(cnt,cnt1);
        cout<<ans<<endl;
    }

}


