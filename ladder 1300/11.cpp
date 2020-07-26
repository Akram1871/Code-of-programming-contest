#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int sum=abs(x)+abs(y);
    if(x>0&&y>0)
        cout<<"0 "<<sum<<" "<<sum<<" 0"<<endl;
    else if(x<0&&y>0)
        cout<<sum*-1<<" 0 "<<"0 "<<sum<<endl;
    else if(x>0&&y<0)
        cout<<"0 "<<sum*-1<<" "<<sum<<" 0"<<endl;
    else if(x<0&&y<0)
        cout<<sum*-1<<" 0 "<<"0 "<<sum*-1<<endl;
}
