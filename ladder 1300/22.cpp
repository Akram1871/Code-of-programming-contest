#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k,l;
    cin>>n;
    for(i=1;i<=2*n;i++)
        cout<<" ";
    cout<<"0\n";
    for(i=1;i<=n;i++)
    {
        for(l=1;l<=2*(n-i);l++)
        cout<<" ";
       cout<<"0";
        for(j=1;j<=i;j++)
            cout<<" "<<j;
        for(k=i-1;k>=0;k--)
            cout<<" "<<k;
        cout<<endl;
    }
    for(i=n-1;i>=0;i--)
    {
        for(l=1;l<=2*(n-i);l++)
        cout<<" ";
        cout<<"0";
        for(j=1;j<=i;j++)
            cout<<" "<<j;
        for(k=i-1;k>=0;k--)
            cout<<" "<<k;
        cout<<endl;
    }
}
