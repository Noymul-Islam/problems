#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int capacity[110][110];
int flow[110][110];
int par[110];
int taken[110];
int n,e;
int max_flow(int source,int dest);
 int bfs(int source,int dest);

int main()
{
    int cs=1;
     while(scanf("%d",&n)==1)
     {
         if(n==0)
              break;
         int source,dest;
         cin>>source>>dest>>e;
         memset(capacity,0,sizeof(capacity));
         while(e--)
         {
             int u,v,w;
             cin>>u>>v>>w;

             capacity[u][v]+=w;
             capacity[v][u]+=w;

         }
     int res=max_flow(source,dest);
     printf("Network %d\nThe bandwidth is %d.\n\n",cs++,res);

     }

    return 0;
}

int max_flow(int source , int dest )
{
    int maxi=0,u;
    memset(flow,0,sizeof(flow));
    while(bfs(source,dest))
    {
        int increment=10000000;
        for(u=dest;par[u]>0;u=par[u])
        {

                      increment = min(increment,capacity[par[u]][u]-flow[par[u]][u]);

        }
          for (u=dest; par[u]>0; u=par[u])
        {
            flow[par[u]][u] += increment;
            flow[u][par[u]] -= increment;
        }
maxi+=increment;

    }

return maxi;
}

int bfs(int source , int dest)
{
    memset(taken,0,sizeof(taken));
    taken[source]=1;
    queue<int>q;
    q.push(source);
    par[source]=-1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int v=1;v<=n;v++)
        {
            if(taken[v]==0&&capacity[u][v]-flow[u][v]>0)
            {
                   q.push(v);
                   par[v]=u;
                   taken[v]=1;

            }

        }
    }
    return taken[dest]==1;


}
