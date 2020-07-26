#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    bool a[3005]={false};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]=true;
    }
    for(int i=1;i<3002;i++)
    if(a[i]==false)
    {
        cout<<i<<endl;
        break;
    }

}
