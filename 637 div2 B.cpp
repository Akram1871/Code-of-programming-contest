#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,k,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int>a(n+2);
        map<int,int>v;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=1;i<n-1;i++)
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                v[i]=i;

        if(v.size()==0)
        {
            cout<<1<<" "<<0<<endl;
            continue;
        }
        int l=1;
        int mx=0,cnt;
        for(int i=0;i<n-k+1;i++)
        {
            cnt=0;
            for(j=i+1;j<i+k-1;j++)
            {
                auto it=v.find(j);
                if(it!=v.end())
                {
                    cnt++;

                }
            }//cout<<" hey "<<cnt<<" "<<i<<" "<<--j<<endl;
            if(cnt>mx)
            {
                l=i+1;
                mx=cnt;
            }

        }
        cout<<mx+1<<" "<<l<<endl;
    }
}

