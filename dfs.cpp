#include<iostream>
#include<vector>
using namespace std;
bool vis[105];
vector<int>v[105];

void dfs(int s)//s->source
{
  if(vis[s])
        return;
  vis[s]=1;
  for(int i=0;i<v[s].size();i++)
  {
      cout<<v[s][i]<<"->";//how to travarse node
      dfs(v[s][i]);
  }
  cout<<vis[1];

}
int main()
{
    int n,a,b,m,s;
    cout<<"Enter vertices number and edge number"<<endl;
    cin>>n>>m;
    cout<<"Enter edge i->j"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }
    cout<<"enter the source node"<<endl;
    cin>>s;
    dfs(s);
    return 0;
}
