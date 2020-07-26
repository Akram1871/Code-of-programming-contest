#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod(int a,int b)
{
    if(a<0)
    {
        int div = a/b;
        if(a%b!=0)
            div--;
        return (a-(b*div));
    }
    else
        return a%b;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mp;
        vector<int>v;
        int a,flg=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);

        }
        for(int i=n;i>=1;i--)
        {
            int ans = i+v[mod(i,n)];
            cout<<"ans "<<ans<<endl;
            if(mp[ans]>1)
            {
                flg=1;
                break;
            }
            mp[ans]++;
        }
        if(flg)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

