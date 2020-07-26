#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n,s,i,index,index2;
    cin>>t;
    while(t--)
    {
        int sum=0,mx=0;
        cin>>n>>s;
        int ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n;i++)
        {
            sum+=ar[i];
            if(sum>s)
            {
                sum-=ar[i];
                index=i-1;
                break;
            }
            else
                index=i;
        }
        for(i=0;i<=index;i++)
        {
            if(ar[i]>mx)
            {
                  mx=ar[i];
                  index2=i;
            }

        }
        if(index+1==n)
            cout<<"0\n";
       else if(ar[index2]>ar[index+1])
            cout<<index2+1<<"\n";
        else
            cout<<index+2<<"\n";

    }




    return 0;

}

