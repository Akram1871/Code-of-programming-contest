#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int n,x=0,a[105],i,j=0,k=0;
    vector<int>even;
    vector<int>odd;
    vector<int>zero;
    vector<int>::iterator it;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            even.push_back(a[i]);
        }
        else if(a[i]==0)
            zero.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }
    int len1,len2,len3;
    len1=even.size();
    len2=odd.size();
    len3=zero.size();

    if(len1==0)
    {
        even.push_back(odd[len2-1]);
        even.push_back(odd[len2-2]);
        odd.pop_back();
        odd.pop_back();
    }

    len1=even.size();
    len2=odd.size();
    len3=zero.size();

    if(len2%2==0)
    {
        zero.push_back(odd[len2-1]);
        odd.pop_back();
        len3++;
        len2--;
    }
    cout<<len2;
    for(it=odd.begin();it!=odd.end();it++)
           cout<<" "<<*it;
    cout<<endl;

    cout<<len1;
    for(it=even.begin();it!=even.end();it++)
          cout<<" "<<*it;
    cout<<endl;

    cout<<len3;
    for(it=zero.begin();it!=zero.end();it++)
         cout<<" "<<*it;
    cout<<endl;

}
