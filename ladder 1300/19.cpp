#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0,mx=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        sum+=(b-a);
        if(sum>mx)
            mx=sum;
    }
    cout<<mx<<endl;
}
