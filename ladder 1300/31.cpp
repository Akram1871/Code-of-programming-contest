#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,res,x,cnt=0;
    queue<int>q;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        q.push(x);
    }
    int i=1;
    while(!q.empty())
    {
        res = q.front();
        if(res==i)
            q.pop();
        i++;
        if(i>n)
            i=1;
        cnt++;
    }
    cout<<cnt-1<<endl;

}
