#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
#define INF 9,223,372,036,854,775,807
typedef long long ll;
using namespace std;
void procedure(string &a,int len)
{
    for(int i=0;i<len;i++)
    {
        if(a[i]=='1')
            a[i]='0';
        else
            a[i]='1';
    }
    reverse(a.begin(),a.begin()+len);
    cout<<"len = "<<len<<endl;
    cout<<a<<endl;

}
int main()
{
    fast;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a,b;
        vector<int>result;
        cin>>a>>b;
        while(n>0)
        {
            int cnt =0;
            for(int i=0,j=n-1; i<n&&j>=0; i++,j--)
            {
                if(a[i]==b[j])
                {
                    cnt++;
                }
                else
                    break;
            }
            procedure(a,cnt);
            result.push_back(cnt);
            n-=cnt;
        }
        int len = result.size();
        cout<<len;
        for(int i=0;i<len;i++)
            cout<<" "<<result[i];
        cout<<endl;

    }


}

