#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1,sum;
    cin>>n>>m;
    sum=m;
    while(1)
    {
       if(i>n)
            i=1;
       sum-=i;

       if(sum<0)
       {
           sum+=i;
           break;
       }
       else if(sum==0)
        break;
        i++;
    }
    cout<<sum<<endl;
}
