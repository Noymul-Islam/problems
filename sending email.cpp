#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int dijkstra(int source , int dest);
vector<int>edge[50001],cost[50001];
struct data
{
    int node ,dist;
    bool operator<(const data &p) const
    {
         return dist>p.dist;
    }

};

int main()
{
    int k=1,cases;
    scanf("%d",&cases);
    while(cases--)
    {

        int n,m,s,t;
        scanf("%d %d %d %d",&n,&m,&s,&t);
        for(int i=0;i<m;i++)
        {
            int p,q,w;
            scanf("%d %d %d",&p,&q,&w);
            edge[p].push_back(q);
            edge[q].push_back(p);
            cost[p].push_back(w);
            cost[q].push_back(w);


        }
        int ret =dijkstra(s,t);
        if(ret==-1)
             printf("Case #%d: unreachable\n",k++);
        else
             printf("Case #%d: %d\n",k++,ret);

        for(int i=0;i<50001;i++)
        {
            edge[i].clear();
            cost[i].clear();


        }
    }


    return 0;
}
int dijkstra(int source ,int dest)
{

    int d[50001];
    for(int i=0;i<50001;i++)
    d[i]=1000000000;

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
         for(int i=0;i<(int)edge[u.node].size();i++)
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
