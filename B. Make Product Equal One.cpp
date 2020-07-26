#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;

int arr[1000000];
long int increase(int n)
{
   long int tc=0;
    while(n!=-1)
    {
        n++;
        tc++;
    }
    return tc;
}


long int decrease(int n)
{
  long int tc=0;
    while(n!=1)
    {
        n--;
        tc++;
    }
    return tc;
}

void solve(int n)
{
  long int count_negative=0,count_zero=0;
  long long int total_cost=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]<0)
       {
           total_cost+=increase(arr[i]);
           count_negative++;
       }
       else if(arr[i]>0)
       {
           total_cost+=decrease(arr[i]);
       }
       else
        count_zero++;
   }
   if(count_negative%2!=0&&count_zero==0)
    cout<<total_cost+2<<endl;
   else
    cout<<total_cost+count_zero<<endl;
}

int main()
{
    fast;
    int n;
    cin>>n;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(n);
}







