#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define pq priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
using namespace std;

int main()
{
    fast;
    int n,t,k,flg,flg2,j;
    char a,b;

    cin>>t;
    while(t--)
    {
        string s,s1,temp;
        vector<int>v;
        cin>>n>>s;
        s1=s;
        temp=s;
        flg=1;
        int mx=-1;
        sort(s.begin(),s.end());
        a=s[0];
        for(int i=0; i<n; i++)
        {
            if(s1[i]==a )
                v.push_back(i+1);
        }

        for(auto it=v.begin(); it!=v.end(); it++)
        {
            k=*it;
            s=s1;
            for( j=0; j<=n-k; j++)
            {
                reverse(s.begin()+j,s.begin()+(j+k));
                //cout<<s<<"I AM"<<j<<" "<<k<<endl;
            }
            if(s<temp)
            {
                temp=s;
                flg=k;
            }
        }
        cout<<temp<<endl;
        cout<<flg<<endl;

    }
}

