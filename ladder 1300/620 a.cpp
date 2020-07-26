#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{

    //fast;
    long long int n,x,y,a,b,cnt,flag;
    cin>>n;
    while(n--)
    {

        cin>>x>>y>>a>>b;


        if(((a*y)+(b*x))%(a+b)==0)
            {
            long long  int res= ((a*y)+(b*x))/(a+b);

                //cout<<res<<" ia"<<endl;
                if((y-res)%b==0 && (res-x)%a==0)
                {
                    int z=(y-res)/b;
                    int f =(res/a)<z?(res/a):z;
                    cout<<f<<endl;
                }

                else
                  cout<<"-1\n";
            }
        else
            cout<<"-1\n";
    }
}
