#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t,n,x,y,n1=0,n2=0,n3=0,n4=0;
    cin>>t;
     for(int i=0;i<t;i++)
     {
         cin>>x;
         if(x==1)
            n1++;
         else if(x==2)
            n2++;
         else if(x==3)
            n3++;
         else
            n4++;
     }
    if(n1>n3)
    {
        n1=n1-n3;
        int total =(n1+2*(n2%2));
        if(total%4==0)
            cout<<n4+n3+(n2/2)+(total/4)<<endl;
        else
           cout<<n4+n3+(n2/2)+(total/4)+1<<endl;

    }
    else
        cout<<n4+n3+(n2/2)+n2%2<<endl;




}
