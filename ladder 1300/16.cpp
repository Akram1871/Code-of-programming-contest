#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int> >v(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
           if(i==j)
             v[i][j]=k;
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
           cout<<v[i][j]<<" ";
           cout<<endl;
    }


}
