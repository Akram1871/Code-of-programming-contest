#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[105];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];

        if(n==1)
            cout<<a[0]<<endl;
        else
        {
            for(int i=0,j=1; j<n; i++,j++)
            {
                if((i+1-a[i])==(j+1-a[j]))
                    swap(a[i],a[j]);
            }
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }

    }
}
