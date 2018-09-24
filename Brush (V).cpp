#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>

using namespace std;

int dijkstra(int source ,int dest);
vector<int>edge[1100],cost[1100];
struct data
{
    int node,dist;

    bool operator<(const data &p)const{

        return p.dist<dist;
          }

};

int main()
{


    int t,k=1;
    scanf("%d",&t);
     getchar();

    while(t--)
    {
        getchar();
        int n,m;
          scanf("%d %d",&n,&m);

        for(int i=0;i<m;i++)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);

            edge[u].push_back(v);
            edge[v].push_back(u);
            cost[v].push_back(w);
            cost[u].push_back(w);


        }
        int ret=dijkstra(1,n);
        if(ret==-1)
              printf("Case %d: Impossible\n",k++);
        else
            printf("Case %d: %d\n",k++,ret);
        for(int i=0;i<1100;i++)
        {
            edge[i].clear();
             cost[i].clear();

        }
    }
    return 0;
}

int dijkstra(int source ,int dest)
{
    int d[1100];
    for(int i=0;i<1100;i++)
          d[i]=100000000;
    priority_queue<data>q;
    data u,v;
     u.node=source;
      u.dist=0;
      d[source]=0;
      q.push(u);
      while(!q.empty())
      {
          u=q.top();
          q.pop();
          int p=u.node;
          if(p==dest)
             return d[p];
          int ucost=d[u.node];

          for(int i=0;i<edge[u.node].size();i++)
          {
              v.node=edge[u.node][i];
              v.dist=ucost+cost[u.node][i];
              if(d[v.node]>v.dist)
              {

                  d[v.node]=v.dist;

                  q.push(v);
              }

          }

      }

    return -1;
}
