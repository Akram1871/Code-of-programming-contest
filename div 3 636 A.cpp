#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        long int a=1,sum=1;
        cin>>n;
        while(1)
        {
            a= a<<1;
            sum+=a;
            if(n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
        }


    }

}
