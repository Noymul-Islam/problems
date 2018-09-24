#include<cstdio>
#include<iostream>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std ;

#define oo 100000000
#define siz 100
#define WHITE 0
#define BLACK 1
int capacity[siz][siz],flow[siz][siz];
int color[siz],par[siz];

int bfs(int start, int end);
int max_flow(int start, int end);
int n,e;
int main()
{


    cin>>n>>e;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            capacity[i][j]=0;
    for(int i=0; i<e; i++)
    {

        int u,v,cost;
        cin>>u>>v>>cost;
        capacity[u][v]=cost;
    }
    int start , end ;
    cin>>start>>end;
    printf("%d\n",max_flow(start,end));
    return 0;

}
int max_flow(int start, int end1)
{
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            {flow[i][j]=0;
            }
    int maximam=0,increment;
    while(bfs( start,end1 ))
    {
       // printf("3");
        increment=oo;
        for(int u=n; par[u]>=0; u=par[u])
        {
            increment=min(increment,capacity[par[u]][u]-flow[par[u]][u]);

        }
        printf("flow-->%d\n",increment);
                  for(int u=n; par[u]>=0; u=par[u])
        {

            flow[par[u]][u]+=increment;
            flow[u][par[u]] -= increment;
        }
        maximam+=increment;
    }
    return maximam;
}

int bfs(int start, int end1)
{
    int u,v;
    for(int i=1; i<=n; i++)
        color[i]=WHITE;
    queue<int>q;
    par[start]=-1;

    int par2[100];
    par2[start]=-1;

    q.push(start);
    while(!q.empty())
    {

        u=q.front();
        q.pop();
           color[u]=BLACK;

        for(int v=1; v<=n; v++ )
        {

            if(color[v]==WHITE && capacity[u][v]-flow[u][v]>0)
            {
                q.push(v);
                par[v]=u;
                par2[v]=u;
                //color[v]=BLACK;

            }


        }


    }
    int c=end1;
    vector<int>vx;
    vx.push_back(c);
    while(par2[c]!=-1)
    {
        c=par2[c];
        vx.push_back(c);
    }
    reverse(vx.begin(),vx.end());
    for(int i=0;i<(int)vx.size();i++)
    {
        printf("%d ",vx[i]);

    }
    //printf("5");
   /*4 5
   1 2 10
   2 3 4
   2 4 6
   3 4 4
   1 4 3*/
    return color[end1]==BLACK;
}
