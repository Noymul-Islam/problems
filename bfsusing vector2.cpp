#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

vector<int>G[100];

void bfs(int n, int source);

int main()
{
 int i,j,n,e;
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
    vector<int>v1,v2;
    v1.push_back(source);
    int taken[100]={0};
    taken[1]=1;
    printf("level 0 : %d\n",source);
    for( int loop=1;loop<n;loop++)
    {
        printf("level : %d\n",loop);

        for( int i=0;i<v1.size();i++)
        {

            int u=v1[i];
            for(int j=0;j<G[u].size();j++)
            {
                int v=G[u][j];

                if(!taken[v])
                {

                    printf("%d",v);
                    taken[v]=1;
                     v2.push_back(v);

                }


            }

        }
        if(v2.empty())
        {printf("NO NODE \n");
              break;
           }
           else
           {
             puts(" ");
              v1.clear();
              v1=v2;
              v2.clear();

           }

    }


}
