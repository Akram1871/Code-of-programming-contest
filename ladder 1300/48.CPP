#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    int k;
    cin>>k;
    vector<int>a(12);
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),comp);
    int i=0,cnt=0;
    while(k>0)
    {
        k-=a[i];
        cnt++;
        if(cnt==12)
            break;
        i++;
    }
    if(k>0)
        cout<<-1<<endl;
    else
     cout<<cnt<<endl;
}
