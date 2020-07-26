#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,cnt,res=0;
    bool flag[12][12];
    cin>>r>>c;
    char mat[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
           cin>>mat[i][j];
    ///for row checking
    for(int i=0;i<r;i++)
    {
        cnt=0;
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]=='S')
                {
                    cnt=1;
                    break;
                }
        }
        if(cnt)
        {
            for(int j=0;j<c;j++)
                flag[i][j]=false;
        }
        else
        {
            for(int j=0;j<c;j++)
            {
                 flag[i][j]=true;
                 res++;
            }

        }
    }
    for(int j=0;j<c;j++)
    {
        cnt=0;
        for(int i=0;i<r;i++)
        {
            if(mat[i][j]=='S')
                {
                    cnt=1;
                    break;
                }
        }
        if(cnt)
        {
            for(int i=0;i<r;i++)
                flag[i][j]=false;
        }
        else
        {
            for(int i=0;i<r;i++)
            {
                 if(flag[i][j]==0)
                 {
                    res++;
                    flag[i][j]=true;
                 }

            }

        }
    }
    cout<<res<<endl;
}
