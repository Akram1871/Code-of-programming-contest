#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,mx,mn;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mn=a[0];
    mx=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            res++;
        }
        else if(a[i]<mn)
        {
            mn=a[i];
            res++;
        }
    }
    cout<<res<<endl;
}
