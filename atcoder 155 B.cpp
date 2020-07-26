#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cne=0,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x%2==0)
        {
            cne++;
            if(x%3==0||x%5==0)
                cnt++;
        }
    }
    if(cne==cnt)
        cout<<"APPROVED"<<endl;
    else
        cout<<"DENIED"<<endl;
}
