#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int x,cnt=0,a[n][m];
        int vis_row[52]={0},vis_col[52]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    vis_row[i]=1;
                    vis_col[j]=1;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis_col[j]==0 && vis_row[i]==0)
                {
                    cnt++;
                    vis_row[i]=1;
                    vis_col[j]=1;
                }

            }
        }

        if(cnt%2)
            cout<< "Ashish" <<endl;
        else
            cout<< "Vivek" <<endl;
    }
}
