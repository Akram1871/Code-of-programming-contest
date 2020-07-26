#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    long int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        sum+=t;
    }
    if(sum%(n+1)==0)
        cout<<2<<endl;
    else
        cout<<3<<endl;
}
