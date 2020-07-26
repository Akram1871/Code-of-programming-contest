#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        for(int i=1;i<n;i++)
        {
            a[i]=a[i]+a[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            b[i]=b[i]+b[i+1];
        }
        int mx=-1;
        for(int i=0;i<n;i++)
        {
          if(a[i]%x!=0 && i>mx)
                mx=i;
        }
        if(mx!=-1)
            mx++;
        int mx1=-1;
        for(int i=0;i<n;i++)
        {
          if(b[i]%x!=0 && (n-i)>mx)
            mx1=(n-i);
        }
        mx=max(mx,mx1);
        if(mx==-1)
            cout<<mx<<endl;
        else
            cout<<mx<<endl;
    }

}


