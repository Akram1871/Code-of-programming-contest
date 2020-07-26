#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int a[100008];
int main()
{
    fast;
    int n,i;
    cin>>n;
    int ar[n+2];
    memset(a,0,sizeof(a));
    for(i=1;i<=n;i++)
    {
        cin>>ar[i];
        a[ar[i]]=1;
    }

     int j=1;
    for(i=n;i>0;i--)
    {
        if(ar[i]==0)
        { xx:
            while(a[j])
                j++;

            if(i==j)
            {
                ar[i+1]=j;
                a[j]=1;
                goto xx;
            }
            else
                goto yy;
            yy:
            ar[i]=j;

        }
    }

   for(i=1;i<=n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
    return 0;

}

