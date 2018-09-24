#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
#include<cstring>
#include<queue>

using namespace std;

int dijkstra(int source, int dest);

struct data
{
    int node,dist;

    bool operator<(const data &p) const {
      p.dist<dist;

    }

};
vector<int>edge[1000],cost[1000];

int n;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int exit,time;
        cin>>n>>exit>>time;

        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;

            edge[u].push_back(v);
            cost[u].push_back(w);
        }
        int count=0;
        for(int i=1;i<=n;i++)
        {
            int res=dijkstra(i,exit);
            if(res<=time)
                  count++;

        }
        printf("%d\n",count);

        for(int i=0;i<=m;i++)
        {
            cost[i].clear();
            edge[i].clear();

        }

        if(t)
            printf("\n");
    }

    return 0;
}

int dijkstra(int source ,int dest)
{
  priority_queue<data>q;
   int d[10000];
  for(int i=1;i<=n;i++)
          d[i]=10000000;
  d[source]=0;
  data u,v;
  u.node=source;
  u.dist=0;
  q.push(u);

while(!q.empty())
{
    u=q.top();
    q.pop();

    int ucost=d[u.node];
    for(int i=0;i<edge[u.node].size();i++)
    {
        v.node=edge[u.node][i];
        //v.dist=d[v.node];
        if(d[v.node]>ucost+cost[u.node][i])
        {
            d[v.node]=ucost+cost[u.node][i];

            q.push(v);

        }

    }

}
return d[dest];
}
