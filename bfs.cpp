#include<cstdio>
#include<vector>
#include<queue>
 void bfs(int n,int source);
using namespace std;
#define max 100
vector<int>g[max];
int main()
{

   int i,j,size,n,e,k=1;

   scanf("%d %d",&n,&e);

   for(i=1;i<=e;i++)
   {
       int x,y;
       scanf("%d %d",&x,&y);
       g[x].push_back(y);


   }

    bfs(n,k);
    return 0;
}
void bfs(int n,int source)
{

    queue<int>q;
    q.push(source);
    int taken[100]={0}, deference[100];
    taken[source]=1;
    deference[source]=0;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!taken[v])
            {
               deference[v]=deference[u]+1;
               taken[v]=1;
               q.push(v);


            }


        }

        q.pop();



    }
    for(int i=1;i<=n;i++)
        printf("%d to %d distence %d\n",source,i,deference[i]);

}
