#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int dijkstra(int source ,int dest);
vector<int>edge[100001],cost[100001];
int par[100001];
int c;
struct data
{
    int node,dist;
    bool operator<(const data &p) const
    {

        return dist>p.dist;
    }
};
int main()
{
    int  n,e;
    c=-1;
    scanf("%d %d",&n,&e);
    memset(par,-1,sizeof(par));
    for(int i=0; i<e; i++)
    {
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        edge[u].push_back(v);
        edge[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);


    }

    //for(int i=0;i<=100;i++)
    //printf("%d",arr[i]);
    int ret=dijkstra(1,n);
    printf("%d\n",ret);
    //printf("%d\n",ret);

    if(ret==1)
    {


        int u=n;
        vector<int>out;
        while(u!=-1)
        {
            out.push_back(u);

            u=par[u];

        }
        reverse(out.begin(),out.end());
        for(int i=0; i<(int)out.size(); i++)
            cout<<out[i]<<" ";
        puts("");

    }
    if(ret==-1)
        printf("-1\n");

    return 0;
}

int dijkstra(int source , int dest)
{
    int d[100001];
    for(int i=0; i<100001; i++)
        d[i]=100000000;

    d[source]=0;
    priority_queue<data>q;

    data u,v;
    u.node =source ;
    u.dist=0;
    q.push(u);
    while(!q.empty())
    {



        u=q.top();
        //arr[++c]=u.node;
        q.pop();
        int p=u.node;
        if(p==dest)
            return 1;
        int ucost=d[u.node];
        for(int i=0; i<edge[u.node].size(); i++)
        {

            v.node=edge[u.node][i];
            v.dist=cost[u.node][i]+ucost;
            if(d[v.node]>v.dist)
            {

                d[v.node]=v.dist;

                par[v.node]=u.node;
                q.push(v);


            }

        }


    }
    return -1;
}
