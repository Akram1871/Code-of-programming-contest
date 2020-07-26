#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a(n);
        mid=n/2;
        int x=2,sum=0,sum1=0;
        for(int i=0;i<mid;i++)
        {
            a[i]=x;
            sum+=x;
            x+=2;
        }
        x=1;
        for(int i=mid;i<n-1;i++)
        {
            a[i]=x;
            sum1+=x;
            x+=2;
        }
        if((sum-sum1)%2)
        {
            a[n-1]=sum-sum1;
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
