#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<deque>
#include<algorithm>
#define PI (2* acos(0))
#define pb push_back
#define ll long long
using namespace std;
//int X[]= {0,0,1,-1};
//int Y[]= {-1,1,0,0};
//int X[]= {0,0,1,1,1,-1,-1,-1};
//int Y[]= {-1,1,0,1,-1,0,1,-1};struct edge
typedef struct edge
{
    int u,v;
    int w;
    edge(int a,int b,int c)
    {
        u=a;
        v=b;
        w=c;
    }
    bool operator < ( const edge& p ) const
    {
        return w > p.w;
    }
};
vector<int>grid[20100];
vector<int>cost[20100];
int dist[150];
int mst(int start,int n)
{
    for(int i=0; i<=n; i++)
        dist[i]=0;
    priority_queue<edge>Q;
    int mn=1<<29,in;
    for(int i=0; i<grid[start].size(); i++)
    {
        Q.push(edge(start,grid[start][i],cost[start][i]));
    }
    dist[start]=1;
    int counter=0;
    int sum=0;
    while(!Q.empty())
    {
        edge top=Q.top();
        Q.pop();
        int u=top.u;
        int v=top.v;
        if(dist[v]==1)
            continue;
        dist[v]=1;
        counter++;
        sum+=top.w;
        if(counter==n-1)
            return sum;
        for(int i=0; i<(int)grid[v].size(); i++)
        {
            Q.push(edge(v,grid[v][i],cost[v][i]));
        }
    }
    return sum;
}
int main()
{
    int n,m,st,end,t;
    int u,v;
    int w;
    int ans;
    while(scanf("%d %d",&n,&m)==2)
    {
        for(int i=1; i<=m; i++)
        {
            scanf("%d %d %d",&u,&v,&w);

            grid[u].push_back(v);
            grid[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        ans=mst(1,n);
        printf("%d\n",ans);
    }
    return 0;
}

