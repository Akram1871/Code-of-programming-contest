#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    long long int min_sum=0,max_sum=0;
    cin>>n>>l>>r;

    ///for finding minimum sum
    for(int i=0;i<l;i++)
    {
        min_sum+=pow(2*1.0,i*1.0);
    }
    min_sum=min_sum+(n-l);

    ///for finding maximum sum
    for(int i=0;i<r;i++)
    {
        max_sum+=pow(2*1.0,i*1.0);
    }
    for(int i=0;i<(n-r);i++)
    {
        max_sum+=pow(2*1.0,(r-1)*1.0);
    }
    cout<<min_sum<<" "<<max_sum<<endl;
}
