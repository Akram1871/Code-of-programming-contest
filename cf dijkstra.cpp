#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<vector<int> >adj(10005,vector<int>(10005,-1));
void dijkstra(int src);

int main()
{
    int x,y,w,src;
    cin>>v>>e;
    //create a 2d array like vector

      for(int i=0; i<e; i++)
        {
            cin>>x>>y>>w;
            adj[x][y]=w;
            adj[y][x]=w;
        }

    src=1;
    dijkstra(src);
}

void dijkstra(int src)
{
    vector<int>dist(v+2,INT_MAX);
    vector<bool>spt(e,false);
    vector<int>path(v,0);
    // Creates a min heap
    priority_queue <int, vector<int>, greater<int> > pq;
    dist[src]=0;
    int u;
    pq.push(src);
    while(!pq.empty())
    {
        u=pq.top();
        spt[u]=true;
        pq.pop();
        for(auto i=0;i<adj[u].size();i++)
        {
            if(dist[u]+adj[u][i]<=dist[i] && adj[u][i]!=-1 )
              {
                dist[i]=dist[u]+adj[u][i];
                if(spt[i]==false)
                    pq.push(i);
                    path[i]=u;    ///store where he comes from

              }

        }
    }
    vector<int>full_path;
    for(int j=v;j!=src;j=path[j])
        full_path.push_back(j);
        full_path.push_back(src);
    reverse(full_path.begin(),full_path.end());
    for(auto i=full_path.begin();i!=full_path.end();i++)
        cout<<*i<<" ";
    cout<<endl;

}
