#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,sum,ex,cal;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        ex =0;
        cal = n/10;
        sum+=cal*10;
        ex=n-sum+cal;
        n=ex;
        while(ex>=10)
        {
            cal = n/10;
            sum+=cal*10;
            ex=n-(cal*10)+cal;
            n=ex;
        }
        //cout<<ex<<endl;
        sum+=ex;
        cout<<sum<<endl;
    }
}
