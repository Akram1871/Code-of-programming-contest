#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>a(100000);
    cin>>n;
    for(int i=0;i<n*n;i++)
    {
        a[i]=i+1;
    }
    for(int i=0,j=n*n-1;i<j;i++,j--)
    {
        cout<<a[i]<<" "<<a[j]<<endl;
    }

}
