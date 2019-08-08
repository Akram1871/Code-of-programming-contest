#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x,cnt=0,cnt1=0,x1=0;
    int v[128],v1[128];
    cin>>n;
    for(x=0;x<n;x++)
    {
        cin>>v[x];
        if(v[x]>cnt)cnt=v[x];
    }
    cout<<cnt<<" ";
    while(n--)
    {
        if(cnt%v[x1]!=0){
        v1[x1]=v[x1];
        if(v1[x1]>cnt1)cnt1=v1[x1];

    } x1++;
    }
    cout<<cnt1<<endl;
return 0;
}
