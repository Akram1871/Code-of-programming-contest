#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long int sum=0,t_sum=0;
    cin>>n;
    int arr[n+3];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        t_sum+=arr[i];
    }
    //int mx = *max_element(arr,arr+n);
    sort(arr,arr+n);
    for(i=0;i<n-1;i++)
        sum+=arr[i];
   int mx=arr[n-1];
    if(t_sum%2==0 and mx<=sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
