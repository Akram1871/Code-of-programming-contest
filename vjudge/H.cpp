#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,b,rem;
    cin>>n;
    rem=n;
    while(rem>1)
    {
        b=1;
        while(b<=rem)
        {
            b<<=1;

        }
        b>>=1;
        rem=rem-b;
        if(rem!=0)
          res++;

    }
    res++;
    cout<<res<<endl;
}
