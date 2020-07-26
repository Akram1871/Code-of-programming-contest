#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
/* ///Extended Eucledian GCD algorithm
int extendgcd(int a,int b,int &x,int &y)
{
    if(a==0){x=0;y=1;return b;}int x1,y1;int d=extendgcd(b%a,a,x1,y1);x=y1-(b/a)*x1;y=x1;return d;
}*/
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int t,n,cnt,cnt2;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cnt2=0;
        string x,a,b;
        cin>>n;
        cin>>x;
        for(int i=0; i<n; i++)
        {
            if(x[i]=='2')
            {
                if(cnt==0 || i==0)
                {
                    a+='1';
                    b+='1';
                }
                else
                {
                    cnt2++;
                    a+='0';
                    b+='2';
                }

            }
            else if(x[i]=='1')
            {
                cnt++;
                if(cnt2==0)
                {
                    a+='1';
                    b+='0';
                }
                else
                {
                    a+='0';
                    b+='1';
                }

            }
            else
            {
                a+='0';
                b+='0';
            }
        }
        cout<<a<<endl<<b<<endl;
    }



}

