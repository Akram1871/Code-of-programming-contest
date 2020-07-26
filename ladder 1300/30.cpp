#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int result = ceil((n*y)*1./100*1.);
    //cout<<result<<endl;
    if(result>x)
        cout<<result-x<<endl;
    else
        cout<<"0"<<endl;
}
