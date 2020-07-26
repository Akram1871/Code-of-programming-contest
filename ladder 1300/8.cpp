#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt_odd=0,cnt_even=0;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            cnt_even++;
        else
            cnt_odd++;
    }
    if(cnt_odd%2==0)
        cout<<cnt_even<<endl;
    else
        cout<<cnt_odd<<endl;
}
