#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,sum=0,res,x;
    //int ar[200];
    cin>>n>>k>>m;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        sum+=x;
    }
    res=(m*n)-sum;
    if(res<=0)
        cout<<"0"<<endl;
    else if(res>k)
        cout<<"-1"<<endl;
    else
    cout<<res<<endl;
}
