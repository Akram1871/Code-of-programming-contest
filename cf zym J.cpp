#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
///Extended Eucledian GCD algorithm
int extendgcd(int a,int b,int &x,int &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    int x1,y1;
    int d=extendgcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int a,b,x,y;
    cin>>a>>b;
    int ans=extendgcd(a,b,x,y);
    cout<<ans<<endl<<" x "<<x<<" y "<<y<<endl;



}

