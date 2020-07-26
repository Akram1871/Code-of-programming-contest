#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn=INT_MAX,res;
    set<int>s;
    multiset<int>ms;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(mn>x)
        {
           mn=x;
           res=i+1;
        }

        s.insert(x);
        ms.insert(x);
    }
    auto it=s.begin();
    auto it1=ms.begin();
    it1++;
    //cout<<*it<<" "<<*it1<<endl;
    if(s.size()!=n && *it==*it1)
        cout<<"Still Rozdil"<<endl;
    else
        cout<<res<<endl;
}
