#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k,i;
    long long int x;
    vector<long long int>v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for( i=1;i<=(k-1);i++)
    {
        v.pop_back();
    }
 long long int result=(v[n-k]-v[0]);
    cout<<result<<endl;
}
