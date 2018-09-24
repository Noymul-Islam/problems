#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define INF 1LL<<60
long long int dist[998100];
struct edge
{
    int u;
    long long int cost;
    edge(int a,int b)
    {
        u=a;
        cost=b;
    }
      bool operator <(const edge &p)const
    {
        return cost>p.cost;
    }
};
int n,m;
vector<int>grid[998100];
vector<int>cost[998100];
int inp[1010][1010];
 int dijkstra(int start,int end)
{

    for(int i=0;i<=n*m;i++)
    dist[i]=INF;
    priority_queue<edge>Q;
    Q.push(edge(start,0));
    dist[start]=0;
    while(!Q.empty())
    {
        edge top=Q.top();
        Q.pop();
        int u=top.u;
        if(u==end)
            return dist[end];
        for(int i=0; i<(int)grid[u].size(); i++)
        {
            int v=grid[u][i];
            if(dist[u]+cost[u][i]<dist[v])
            {
                dist[v]=dist[u]+cost[u][i];
                Q.push(edge(v,dist[v]));
            }
        }
    }
    return -1;
}
int main()
{
    int nod,left, up;
    int t,st,end,u,v;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%d %d",&n,&m);
        st=1;
        end=n*m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                scanf("%d",&inp[i][j]);
                nod=(i-1)*m+j;
                left=nod-1;
                up=nod-m;
//                printf("%d %d %d %d\n",nod, left, up,i);
                if(j>1)
                {
                    grid[left].push_back(nod);
                    cost[left].push_back(inp[i][j]);
                    grid[nod].push_back(left);
                    cost[nod].push_back(inp[i][j-1]);
                }
                if(up>0)
                {

                    grid[up].push_back(nod);
                    cost[up].push_back(inp[i][j]);
                    grid[nod].push_back(up);
                    cost[nod].push_back(inp[i-1][j]);

                }

            }
        }
        int ans=dijkstra(st,end);
        printf("%d\n",ans+inp[1][1]);
        for(int i=0;i<=n*m;i++)
        {
            grid[i].clear();
            cost[i].clear();
        }

        }
return 0;
}
