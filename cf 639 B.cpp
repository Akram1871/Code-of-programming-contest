#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;

        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        xx:
        int a=0,i=1;
        while(a<=n)
        {
            a+=(i-1)+(2*i);
            i++;
        }
        i--;
        a-=(i-1)+(2*i);//cout<<" a "<<a<<endl;
        i--;
        int div = n/a;
        cnt+=div;
        int rem = n%a;
        if(rem>1)
        {
            n=rem;
            goto xx;
        }
        cout<<cnt<<endl;

    }
}

