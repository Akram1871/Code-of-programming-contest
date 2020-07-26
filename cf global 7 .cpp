#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;
// Defining the BinaryFunction
bool comp(int a, int b)
{
    return (a < b);
}

int main()
{
    fast;
    int n,x,temp=0;
    cin>>n;
    vector<int>a(n);
    a.push_back(0);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[i]=x+temp;
        temp = max(a[i],temp);
        a.push_back(0);

    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;



}

