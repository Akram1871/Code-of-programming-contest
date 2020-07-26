#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,cnt=0;
    cin>>n>>k;
    int a[n+5];
    for(int i=0;i<n;i++)
        a[i]=i+1;

    sort(a+(n-k-1),a+n, greater<int>());

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
