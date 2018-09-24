#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<queue>

using namespace std;
 void bfs(int source, int node, int TTL);
vector<int>G[50];
  int p=1,point;
map<int, int >mymap;
int main()
{
    int number;
     while(scanf("%d",&number)==1)
     {
         if(number==0)
               break;
                 int Assign=1;
         for(int i=0;i<number;i++)
         {
             int x,y;
             scanf("%d %d",&x,&y);
              if(mymap.find(x)==mymap.end())
              {
                  mymap[x]=Assign++;

              }
               if(mymap.find(y)==mymap.end())
               {
                   mymap[y]=Assign++;

               }

               G[mymap[x]].push_back(mymap[y]);
               G[mymap[y]].push_back(mymap[x]);

            }

         for(;;)
         {
             int TTL;
              scanf("%d %d",&point,&TTL);
                if(point==0&&TTL==0)
                      break;

                   bfs(mymap[point],Assign-1,TTL);

                  }

    for(int i=0;i<50;i++)
        G[i].clear();
     mymap.clear();
     }

    return 0;
}

 void bfs(int source,int node,int TTL)
 {
      queue<int>Q;
     Q.push(source);
     int dist[50]={0};
int taken[50]={0};
     int c=0;
    taken[source]=1;
       dist[source]=0;
       while(!Q.empty())
       {
           int u=Q.front();
           Q.pop();
            for(int i=0;i<G[u].size();i++)
            {
                int v=G[u][i];
                 if(!taken[v])
                 {
                     dist[v]=dist[u]+1;
                     taken[v]=1;
                      Q.push(v);

                 }

       }
}
       int a;
        for(a=1;a<=node;a++)
        {
            if(dist[a]>TTL ||(dist[a]==0 && a!=source))
              c++;
        }
      printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",p,c,point,TTL);
        p++;

 }



