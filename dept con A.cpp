#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fast;
    int n,t,x,len,i,res, a[2];
    set<int>s;
    set<int>::iterator it;
    multiset<int>ms;
    multiset<int>::iterator it1;
    cin>>t;
    while(t--)
    {
        int c1=0,c2=0;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
            ms.insert(x);
        }
        if(n==1)
             cout<<"yes\n";
        else{
        len=s.size();


        if(len==2)
        {

            for(it=s.begin(),i=0;i<2;it++,i++){
                 a[i]=*it;
                 }
            for(it1=ms.begin();it1!=ms.end();it1++){
                 if(*it1==a[0])
                    c1++;
                 else if(*it1==a[1])
                    c2++;
                 }
            if(c1>=2&&c2>=2)
                cout<<"no\n";
            else{
           res=a[1]-a[0];
             if(res!=1)
            cout<<"yes\n";
             else
            cout<<"no\n";
        }}
        else if(len==1)
            cout<<"yes\n";
        else
            cout<<"no\n";
        s.clear();}

    }

}
