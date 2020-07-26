#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<long int, vector<long int>, greater<long int> >
 ///Extended Eucledian GCD algorithm
long int extendgcd(long int a,long int b,long int &x,long int &y)
{
    if(a==0){x=0;y=1;return b;}long int x1,y1;long int d=extendgcd(b%a,a,x1,y1);x=y1-(b/a)*x1;y=x1;return d;
}
///finding single solution
bool find_any_solution(long int a,long int b,long int c,long int &x0,long int &y0,long int &g)
{
    g=extendgcd(abs(a),abs(b),x0,y0);
    if(c%g)
    {
        //cout<<"I am"<<c%g<<endl;
        //there is no solution
        return false;
    }
    x0*=c/g;
    y0*=c/g;
    if(a<0)
        x0=-x0;
    if(b<0)
        y0=-y0;
    return true;
}
///counting all possible solution
void shift_solution(long int &x,long int &y,long int a,long int b,long int cnt)
{
    x+=cnt*b;
    y-=cnt*a;
}
///finding all solution
long int find_all_solutions(long int a,long int b,long int c,long int minx,long int maxx,long int miny,long int maxy)
{
    long int x,y,g;
    if(!find_any_solution(a,b,c,x,y,g))
        return 0;
    a/=g;
    b/=g;
    long int sign_a=a>0?1:-1;
    long int sign_b=b>0?1:-1;
    shift_solution(x,y,a,b,(minx-x)/b);
    if(x<minx)
        shift_solution(x,y,a,b,sign_b);
    if(x>maxx)
        return 0;
    long int lx1=x;
    shift_solution(x,y,a,b,(maxx-x)/b);
    if(x>maxx)
        shift_solution(x,y,a,b,-sign_b);
    long int rx1=x;
    shift_solution(x,y,a,b,-(miny-y)/a);
    if(y<miny)
        shift_solution(x,y,a,b,-sign_a);
    if(y>maxy)
        return 0;
    long int lx2=x;

    shift_solution(x,y,a,b,-(maxy-y)/a);
    if(y>maxy)
        shift_solution(x,y,a,b,sign_a);
    long int rx2=x;
    if(lx2>rx2)
        swap(lx2,rx2);
    long int lx = max(lx1,lx2);
    long int rx=min(rx1,rx2);
    if(lx>rx)
        return 0;
    return (rx-lx)/abs(b)+1;

}

 int main()
{
    fast;
    long int t,a,b,c,x1,x2,y1,y2,result;
    cin>>t;
    for( int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>x1>>x2>>y1>>y2;
        c*=-1;
        result=find_all_solutions(a,b,c,x1,x2,y1,y2);
        cout<<"Case "<<i<<": "<<result<<endl;
    }



}

