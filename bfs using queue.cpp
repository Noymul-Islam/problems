#include<cstdio>
#include<cmath>
#include<cstring>
#include<queue>
using namespace std;
vector<int>G[100];
void bfs(int n, int source);
int main()
{

    int i,j,e,n;
    scanf("%d %d",&n,&e);
    for(i=1;i<=e;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        G[x].push_back(y);
        G[y].push_back(x);



    }
    bfs(n,1);
    return 0;
}

void bfs(int n,int source)
{

    queue<int>Q;
    Q.push(source);
    int taken[100]={0};
    int distance[100];
    taken[source]=1;
    distance[source]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(!taken[v])
            {
                distance[v]=distance[u]+1;
                taken[v]=1;
                Q.push(v);


            }
        }
        Q.pop();
    }

    for(int i=1;i<=n;i++)
            printf("%d to %d distance is %d\n",source,i,distance[i]);
}
