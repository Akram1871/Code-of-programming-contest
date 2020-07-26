#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int test,a,b;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        if(a==0||b==0)
            cout<<0<<endl;
        else
        {
            int  c= min(a,b);
            if(c==b)
            {
                swap(a,b);
            }
            if(a*2<b)
                cout<<a<<endl;
            else
            {
                long long d = a+b;
                cout<<d/3<<endl;
            }

        }
    }

}


