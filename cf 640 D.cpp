#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        int x;
        long long sum =0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
            v.push_back(x);
        }
        long long a=0,b=0,cnt=0,ab=1;
        int temp =0;
        temp = v[0];
        a+=temp;
        for(int i=1,j=n;i<j;)
        {
            if(ab%2)
            {
                ab++;
                while(cnt<=temp)
                {
                    cnt+=v[j-1];
                    j--;
                    if(j<=i)
                        break;
                }
                temp =cnt;
                cnt=0;
                b+=temp;
                //cout<<" hey b "<<b<<" temp "<<temp<<" ab "<<ab<<endl;
            }
            else
            {
                ab++;
                while(cnt<=temp)
                {
                    cnt+=v[i];
                    i++;
                    if(j<=i)
                        break;
                }
                temp =cnt;
                cnt=0;
                a+=temp;
                //cout<<" hey a "<<a<<" temp "<<temp<<" ab "<<ab<<endl;
            }

        }
        cout<<ab<<" "<<a<<" "<<b<<endl;


    }

}

