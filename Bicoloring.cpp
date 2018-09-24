#include<cstdio>
#include<cstring>
#include<cmath>
#include<queue>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

void bfs(int source,int node );
vector<int>G[200];
int color[200];int k;
int main()
{
    int node ;
    while(scanf("%d",&node)==1)
   {
       if(node==0)
          break;
          int edge;
          scanf("%d",&edge);
          k=0;
       for(int i=0;i<edge;i++)
       {
           int x,y;
           cin>>x>>y;
           G[x].push_back(y);
           G[y].push_back(x);

       }

       bfs(0,node-1);
       if(k>0)
        cout<<"NOT BICOLORABLE."<<"\n";
          else

         cout<<"BICOLORABLE."<<"\n";

         for(int i=0;i<200;i++)
              G[i].clear();

   }
   return 0;


}

void bfs(int source ,int node)
{
    memset(color,0,sizeof(color));
    queue<int>Q;

    Q.push(source);
    color[source]=3;
    while(!Q.empty())
    {
        int u=Q.front();
        //color[u]=3;
        Q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(color[v]==0)
            {
                if(color[u]==3)
                color[v]=2;
                else if(color[u]==2)
                     color[v]=3;

                Q.push(v);

            }
            if((color[v]==3&&color[u]==3)||(color[v]==2&&color[u]==2))
                {k++;
                   break;
                }
        }

        if(k>0)
               break;
    }

}

