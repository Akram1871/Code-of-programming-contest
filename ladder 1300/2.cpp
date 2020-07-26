#include<iostream>
using namespace std;
int main()
{
    int mat[6][6],x,y,res;
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
    {
        cin>>mat[i][j];
        if(mat[i][j])
        {
            x=i;
            y=j;
        }
    }
    res=(abs(x-3)+abs(y-3));
    cout<<res<<endl;
}
