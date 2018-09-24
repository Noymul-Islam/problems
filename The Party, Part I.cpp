#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>

using namespace std;
void bfs(int node, int source);
vector<int>G[1100],v1,v2;

int main()
{
    int c=0,cases,folow;
    while(scanf("%d",&cases)==1)
    {
       for(folow=1;folow<=cases;folow++)
        {
       int nodes,edges,i,j,m,n;
        scanf("%d %d",&nodes,&edges);
        for(i=0;i<edges;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            G[x].push_back(y);
            G[y].push_back(x);


        }

        bfs(nodes,0);
        v1.clear();
        v2.clear();
        for(int i=0;i<nodes;i++)
              G[i].clear();

        if(folow!=cases)
        printf("\n");
    }
    }
return 0;
}

  void bfs(int nodes,int source)
  {
      v1.push_back(source);
      int taken[1100]={0};
      int distance[1100];
      taken[source]=1;
      distance[source]=0;
      for(int loop=0;;loop++)
      {
          for(int i=0;i<v1.size();i++)
      {
          int u=v1[i];
          for( int j=0;j<G[u].size();j++)
          {
              int v=G[u][j];
              if(!taken[v])
              {
                  taken[v]=1;
                  distance[v]=distance[u]+1;
                    v2.push_back(v);

              }

          }

      }
      if(v2.empty())
           break;
           else
           {
               v1.clear();
               v1=v2;
               v2.clear();

           }

      }
        for(int k=1;k<nodes;k++)
        printf("%d\n",distance[k]);

  }
