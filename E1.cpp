#include<cstdio>
#include<cstring>
#include<cmath>
#include<queue>
#include<vector>
using namespace std;

int dist[200],sc,des,p,pre,nex,n;
vector<int>graph[200];

void bfs(void)
{
    queue<int>q;
    memset(dist,-1,sizeof(dist));

    q.push(sc);
    dist[sc]=0;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int k=0;k<graph[u].size();k++)
        {
            int v=graph[u][k];

            if(dist[v]==-1 || (dist[v]>dist[u]+(abs(v-u))))
            {
                dist[v]=dist[u]+abs(v-u);
                q.push(v);
            }
        }
    }
    return ;
}

int main()
{
    while(scanf("%d %d %d",&n,&sc,&des)==3)
    {
        if(!n && !sc && !des)
            break;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&p);

            scanf("%d",&pre);

            for(int j=1;j<p;j++)
            {
                scanf("%d",&nex);
                graph[pre].push_back(nex);
                graph[nex].push_back(pre);
                pre=nex;
            }
        }
        bfs();

        printf("%d\n",dist[des]);

        for(int i=0;i<200;i++)
            graph[i].clear();
    }
    return 0;
}
