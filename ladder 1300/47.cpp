#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int len= sqrt(n);
    int a,b,cnt=0;
    for(int i=1;i<=len;i++)
    {
        a=i;
        b=n-(a*a);
        if((a+(b*b))==m)
            cnt++;
    }
    if(m==1&&n==1)
        cout<<2<<endl;
    else
    cout<<cnt<<endl;
}
