#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>

using namespace std;
 void bfs(int node,int source);
  vector<int>G[100];

 int main()
 {
     int i,j,m,n,edges,node;

     scanf("%d %d",&edges,&node);

     for(i=1;i<=edges;i++)
     {
         int x,y;
         scanf("%d %d",&x,&y);

         G[x].push_back(y);
         G[y].push_back(x);


     }
     bfs(node,1);
     return 0;
 }
  void bfs(int node, int source)
  {
      queue<int>Q;
      Q.push(source);
      int taken[100]={0};
       int distance[100];
        taken[source]=1;
        distance[source]=0;
        while(!Q.empty())
              {
                  int u= Q.front();
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
              for(int k=1;k<=node;k++)
                  printf("%d to %d disrtance ids %d\n",source,k,distance[k]);


  }

