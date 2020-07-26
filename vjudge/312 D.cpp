#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    vector<int>color(n+1,1);
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b>>c;
        //cout<<"color before "<<a<<" "<<b<<" = "<<color[a]<<" "<<color[b]<<endl;
        if(c%2==0)
        {
            color[a]=0;
            color[b]=0;
        }
        else
        {
           if(color[a]!=0)
                color[a]=1;
           if(color[b]!=0)
                color[b]=1;
        }
        //cout<<"color after "<<a<<" "<<b<<" = "<<color[a]<<" "<<color[b]<<endl;

    }
    for(int i=1;i<=n;i++)
        cout<<color[i]<<endl;
}
