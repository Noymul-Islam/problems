#include<bits/stdc++.h>
using namespace std;
vector<int>e[100],cost[100];
struct data
{
    int node, dist;
        bool operator <(const data &p)const
    {
        return dist>p.dist;
    }

};
int dijkstra(int source, int dest);
int n;
int main()
{
    while(scanf("%d",&n)==1)
    {
        int ed;
        for(int i=1;i<=n;i++)
        {
            cin>>ed;
            for(int j=0;j<ed;j++)
            {
                int node,dist;
                cin>>node>>dist;
                edge[i].push_back(node);
                cost[i].push_back(dist);

            }

        }
        int source,dest;
        cin>>source>>dest;
        dijkstra(source,dest);

    }

    return 0;
}
int dijkstra(int source, int dest)
{
    int d[100];
    for(int i=0;i<100;i++)
        d[i]=1000000;
     priority_queue<data>q;
     d[source]=0;
     data u,v;
     u.dist=0;
     u.node=source;
     q.push(u);
     while(!q.empty())
     {
         u=q.top();
         q.pop();
         int ucost=d[u.node];
         for(int i=0;i<e[u.node];i++)
         {
             v.node=e[u.node][i];
             v.dist=cost[u.node][i];
             if(d[v.node]>ucost+v.dist)
             {
                 d[v.node]=ucost+ v.dist;
                 q.push(v);

             }

         }

     }
    return d[dest];
}
