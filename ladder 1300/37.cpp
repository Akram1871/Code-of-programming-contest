#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>n;
    int flag=0;
    for(int i=0;i<14;i++)
    {
        if(n%a[i]==0||n==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
