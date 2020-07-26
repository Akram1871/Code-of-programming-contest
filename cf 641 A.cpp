#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    for(int i=2;i<=n;i++)
        if(n%i==0)
    {
        return i;
        break;
    }
}
int main()
{
    int t,k;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int i = f(n);
        if(i!=2)
           n+=i+(2*(k-1));
        else
            n+=2*k;

        cout<<n<<endl;
    }
}
