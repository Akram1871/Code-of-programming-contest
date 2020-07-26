#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt,x,sum;
    cin>>t;
    while(t--)
    {
        cnt=0;
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
            if(x==0)
            {
                cnt++;
                sum+=1;
            }
        }
        if(sum==0)
            cout<<cnt+1<<endl;
        else
            cout<<cnt<<endl;
    }
}
