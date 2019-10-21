#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

struct ob
{
    int value;
    int weight;
};

ob ar[1000];
bool cmp(ob x,ob y)
{
    return x.weight>y.weight;
}

int mx(int a,int b)
{
    return (a>b)?a:b;
}

int knapsack(int n,int w)
{

    if(n==0||w==0)
        return 0;

    if(ar[n-1].weight>w)
        return knapsack(n-1,w);

    else
    {
        return mx(ar[n-1].value+knapsack(n-1,w-ar[n-1].weight),knapsack(n-1,w));
    }
}

int main()
{
    fast;
    int n,test_case;
    cin>>test_case;
    while(test_case--)
    {
       cin>>n;
      //ob ar[n+5]={0};
     for(int i=0;i<n;i++)
      {
        cin>>ar[i].value;
        cin>>ar[i].weight;
      }
     sort(ar,ar+n,cmp);
     int w,m,result=0;
     cin>>m;
     for(int i=1;i<=m;i++)
     {
        cin>>w;
        result+=knapsack(n,w);
     }
     cout<<result<<endl;
    }

}






