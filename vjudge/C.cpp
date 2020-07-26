#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    int n,m,x,res,mid;
    cin>>n;
    int a[n+2];

    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i==0)
            a[i]=1;
        else
         a[i]=a[i-1]+x;
    }

    cin>>m;
    int re[m+2];
    for(int i=0;i<m;i++)
          cin>>re[i];
    for(int i=0;i<m;i++)
    {
        x=re[i];
        for(int j=0;j<n;j++)
        {
            if(a[j]==x||a[j]>x||j==n-1)
            {
                res=j+1;
                break;
            }
        }

        cout<<res<<"\n";
    }


}
