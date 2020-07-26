#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n;
    cin>>t;
    while(t--)
          {
              cin>>n;
              if(n==1)
                cout<<0<<endl;
              else
              {
                  long long temp =0,k,i,j;
                  for( i=3,j=1,k=8;i<=n;i+=2,j++,k+=8)
                  {
                    temp+= k*j;
                    //cout<<i<<" = "<<temp<<endl;
                  }
                  cout<<temp<<endl;
              }
          }
}

