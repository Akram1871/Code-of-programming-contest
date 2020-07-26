#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int  main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(m),b(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a.begin(),a.end(),comp);
    sort(b.begin(),b.end());
    int temp=0,mx=0,mn=0;
    for(;;)
    {
        mx+=a[0];
        mn+=b[0];
        a[0]--;
        b[0]--;
        if(b[0]==0)
            b[0]=INT_MAX;
        if(a[0]==0)
            a[0]=-5;
        sort(a.begin(),a.end(),comp);
        sort(b.begin(),b.end());
        temp++;
        if(temp==n)
            break;
    }
    cout<<mx<<" "<<mn<<endl;

}
