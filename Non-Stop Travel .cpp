#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;

int dijkstra(int source,int dest);
vector<int>edge[1000],cost[1000];
int par[1000],cs=1;
int source,dest;
struct data
{
    int node,dist;
    bool operator <(const data &p)const
    {
        return dist>p.dist;
    }

};

int n;
int main()
{

    while((scanf("%d",&n)==1)&&n!=0)
    {
        memset(par,-1,sizeof(par));
        for(int i=1; i<=n; i++)
        {
            int ed;
            cin>>ed;
            for(int k=0; k<ed; k++)
            {
                int j,w;
                cin>>j>>w;
                edge[i].push_back(j);
                cost[i].push_back(w);


            }


        }

        cin>>source>>dest;

        int res=dijkstra(source,dest);
        int u=dest;
        vector<int>out;
        while(u!=-1)
        {
            //printf("1");

            out.push_back(u);
            u=par[u];
        }
        reverse(out.begin(),out.end());
        printf("Case %d: Path =",cs++);
        for(int i=0; i<out.size(); i++)
            printf(" %d",out[i]);
        printf("; %d second delay\n",res);//Case 1: Path = 2 1 4; 8 second delay

        for(int i=0; i<1000; i++)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }

    return 0;
}

int  dijkstra(int source ,int dest)
{
    //while(!q.empty())
    //q.pop();
    priority_queue<data>q;
    int d[1000];
    for(int i=1; i<=n; i++)
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

        //if(u.node==dest)
        // return d[dest];
        for(int i=0; i<edge[u.node].size(); i++)
        {
            v.node=edge[u.node][i];
            v.dist=cost[u.node][i];
            if(d[v.node]>ucost+cost[u.node][i])
            {
                d[v.node]=ucost+cost[u.node][i];
                par[v.node]=u.node;
                q.push(v);
            }

        }
    }
    return d[dest];
}
