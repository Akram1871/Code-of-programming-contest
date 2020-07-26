#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,cnt=0;
    vector<pair<int,int>>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y*-1));
    }
    sort(v.begin(),v.end());
    //for(auto it:v)
        //cout<<it.first<<" "<<it.second<<endl;
    int m=0;
    for(int i=0;i<n;i++)
    {
          if((m+v[i].second)>0)
            {
                cout<<"Happy Alex"<<endl;
                return 0;
            }
        m=(m>(-1*v[i].second))?m:(-1*v[i].second);
    }
         cout<<"Poor Alex"<<endl;
         return 0;
}
