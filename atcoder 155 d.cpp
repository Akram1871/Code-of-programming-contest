#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,x;
    vector<long long int>v,res;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    //sort(v.begin(),v.end());
    //int temp=v[0];
    for(int j=0;j<n-1;j++)
    {
        for(int i=j+1;i<n;i++)
            {
                //cout<<"i am "<<v[i]*v[j]<<endl;
                res.push_back(v[i]*v[j]);
            }

       // v[n-1]=v[n-1]*temp;
    }

    sort(res.begin(),res.end());
    cout<<res[k-1]<<endl;
}
