#include<cstdio>
#include<cstring>
#include<cmath>
#include<queue>
#include<map>
#include<vector>
using namespace std;
  void bfs(int source, int dest, int node);
vector<int>G[25];

int main()
{

int i,j,m,n, p=1,k;
 while(scanf("%d",&m)==1)
 {
     int arr[m];
     for(j=0;j<m;j++)
            {
                scanf("%d",&arr[j]);
                 G[1].push_back(arr[j]);
                 G[arr[j]].push_back(1);

            }


     for(i=2;i<=19;i++)
     {
         scanf("%d",&k);
            int arra[k];
            for(j=0;j<k;j++)
            {
                scanf("%d",&arra[j]);
                 G[i].push_back(arra[j]);
                 G[arra[j]].push_back(i);

            }



     }
     scanf("%d",&n);
    printf("Test Set #%d\n",p++);
      for(i=0;i<n;i++)
      {

          int source,dest;
           scanf("%d %d",&source,&dest);
           bfs(source,dest,20);
      }
       printf("\n");
      for(i=0;i<25;i++)
         G[i].clear();


 }

    return 0;
}
 void bfs(int source, int dest ,int node)
 {
     queue<int> Q;
     int taken[100]={0};
      int distance[100]={0};
      Q.push(source);
      taken[source]=1;
        distance[source]=0;
    while(!Q.empty())
    {
        int u= Q.front();
        for(int i=0 ;i<G[u].size();i++)
        {
            int v= G[u][i];
            if(!taken[v])
            {
                taken[v]=1;
                 distance[v]=distance[u]+1;
                  Q.push(v);

            }

        }
        Q.pop();
    }
    int c=distance[dest];
    printf("%2d to %2d: %d\n",source,dest,c);

 }
