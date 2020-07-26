#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
using namespace std;

int main()
{
    fast;
     int t,n,s,k,cntd,cntu,x,res,i;
    cin>>t;
    while(t--)
    {
        cntd=0;
        cntu=0;
        cin>>n>>s>>k;
        map<int,bool>a;
        for( i=0;i<k;i++)
        {
            cin>>x;
            a[x]=1;
        }
        for(i=s;i>0;i--)
        {
            if(a[i]==0)
                break;
            cntd++;

        }
        for(i=s;i<=n;i++)
        {
            if(a[i]==0)
                break;
            cntu++;

        }
        if(cntd==s)
            cntd=0;
        if(cntu==(n-(s-1)))
            cntu=0;
        if(cntd!=0 && cntu!=0)
           res=(cntd>cntu)?cntu:cntd;
        else if(cntu!=0)
            res=cntu;
        else
            res=cntd;

        cout<<res<<endl;
    }


}
