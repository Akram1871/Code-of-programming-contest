#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x;
    cin>>n>>m;
    vector<int>a(n,0);
    int temp=-1;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        if(x!=temp )
        {
            temp=x;
            a[x-1]++;
        }
        else
            temp=x;
    }
    reverse(a.begin(),a.end());
    auto cur =max_element(a.begin(),a.end())-(a.begin());
    cout<<cur<<" I am a cur 1"<<endl;
    cur=n-(cur+1);
    cout<<cur<<" I am a cur"<<endl;
    cout<<(cur)+(n*(a[cur-1]-1))<<endl;
}
