#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,a,b,div,res,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        if(a%b==0)
            cout<<a<<"\n";
        else if(a<b)
            {

            res=b/2;
            cout<<res<<"\n";
            }
        else
        {
            if(a<b)
            {
                c=a;
                a=b;
                b=c;
            }
            div=a/b;
            res=(div*b)+(b/2);
            cout<<res<<"\n";
        }


    }




    return 0;

}

