#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
           cin>>a[i][j];

    a[0][0]='B';
    char temp='B',tm;
    for(int i=0;i<n;i++)
    {

        if(i>0)
        {
            tm=a[i-1][0];
            if(tm=='B')
               temp='B';
               else
                temp='W';
        }

        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                if(temp=='B')
                    a[i][j]='W';
                else
                    a[i][j]='B';
                temp=a[i][j];

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
           cout<<a[i][j];
           cout<<endl;
    }

}
