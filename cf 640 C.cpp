#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t,n,k;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       long long cnt =0;
       long long i=0;
       cnt = k/(n-1);
       i= cnt*n;
       i+=(k%(n-1));
       if(k%(n-1)==0)
        i--;
       cout<<i<<endl;


   }
}

