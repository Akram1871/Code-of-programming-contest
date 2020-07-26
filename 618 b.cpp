#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,res;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a(2*n,0);
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());

            cout<<abs(a[n]-a[n-1])<<endl;


    }
}
