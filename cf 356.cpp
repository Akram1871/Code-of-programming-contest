#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    vector<int>v(n+2);
    for(int i=0;i<n;i++)
        cin>>v[i];

    int i,j;

    for( i=k-1,j=k-1;i<n&&j>=0;i++,j--)
    {
        if(v[i]==1&&v[j]==1)
        {
            if(j==k-1)
                cnt+=1;
            else
                cnt+=2;
        }


    }
    //cout<<"hey I am out "<<i<<" "<<j<<endl;
    if(j>=0)
    {

        for(;j>=0;j--)
        {
            if(v[j]==1)
                cnt++;
        }
    }
    else if(i<n)
    {

      for(;i<n;i++)
        {
            if(v[i]==1)
                cnt++;
        }
    }

    cout<<cnt<<endl;
}
