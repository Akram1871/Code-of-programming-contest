#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,s1=0,i;
    vector<int>result;
    cin>>n;
    int a[n];
    for( i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        if(ceil(a[0]/a[i])>=2){
        s+=a[i];
        result.push_back(i+1);
        }
        else
        s1+=a[i];
    }
    int t=result.size();
    if(t+1==n)
    {
     s1+=result[t-1];
     result.pop_back();
    }
    if((s+a[0])>s1)
    {
        cout<<result.size()+1<<endl;
        cout<<"1"<<" ";
        for(i=0;i<result.size();i++)
        cout<<result[i]<<" ";
        cout<<endl;
    }
    else
    cout<<"0"<<endl;

}
