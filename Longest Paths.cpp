#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
struct data{
    int number;
    int dest;
}dist[105];

void bfs(int source);
vector<int>G[105];
bool comp(data p, data q)
{
    if(p.dest==q.dest)
         return p.number<q.number;
    return p.dest>q.dest;

}
int main()
{
    int node;
    while(scanf("%d",&node)==1)
    {if(node==0)
     break;
     int s;
     cin>>s;
       int u,v;
     while(scanf("%d %d",&u,&v)==2)
     {
         if(u==0&&v==0)
              break;
         G[u].push_back(v);
         //G[v].push_back(u);


     }
     dist[0].number=100000;
     dist[0].dest=-1;
      bfs(s);
      sort(dist,dist+node+1,comp);
      printf("%d\n",dist[0].dest);
      for(int i=0;i<=node;i++)
        printf("-->%d\n",dist[i].dest);

      for(int i=0;i<=node;i++)
            G[i].clear();
    }

    return 0;
}

void bfs(int source)
{
    queue<int>q;
    int taken[105];
    memset(taken,0,sizeof(taken));
    dist[source].number=source;
    dist[source].dest=0;
    q.push(source);
    taken[source]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
       //     if(!taken[v])
           // {
     //           taken[v]=1;
                dist[v].number=v;
                dist[v].dest=dist[u].dest+1;

         //   }

        }
    }

}
