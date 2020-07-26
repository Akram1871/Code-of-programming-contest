#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long ans=1,sum=0;
    cin>>n;
    while(n--)
    {
        ans<<=1;
        sum+=ans;
    }
    cout<<sum<<endl;

}
