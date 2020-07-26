#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n<k)
            cout<<"NO"<<endl;

        else if(n==k)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
                cout<<1<<" ";
            cout<<endl;
        }
        else  if(n%2==0)
        {
            int rem = n/2;
            if(k<=rem)
            {
                cout<<"YES"<<endl;
                long long sum=0;
                for(int i=1; i<k; i++)
                {
                    cout<<2<<" ";
                    sum+=2;
                }
                cout<<n-sum<<endl;
            }
            else if((n-(k-1))%2)
            {
                cout<<"YES"<<endl;
                long long sum=0;
                for(int i=1; i<k; i++)
                {
                    cout<<1<<" ";
                    sum+=1;
                }
                cout<<n-sum<<endl;
            }

            else
                cout<<"NO"<<endl;
            //cout<<rem<<" "<<k<<"hey"<<endl;
        }
        else
        {
            long long sum=0;
            if(k%2==1 && k<=n)
            {
                cout<<"YES"<<endl;
                for(int i=1; i<k; i++)
                {
                    cout<<1<<" ";
                    sum+=1;
                }
                cout<<n-sum<<endl;
            }

            else
                cout<<"NO"<<endl;
        }
    }
}
