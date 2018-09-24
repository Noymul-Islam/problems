#include<cstdio>
#include<cmath>
#include<vector>

using namespace std;
#define white 1
#define black 2
vector<int>G[250];
void bfs(int n, int source,int e);
int main()
{
    int i,j,m,n,e;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
               break;
         scanf("%d",&e);
         for(i=0;i<e;i++)
         {
             int x,y;
              scanf("%d %d",&x,&y);
              G[x].push_back(y);
              G[y].push_back(x);


         }
           bfs(n,0,e);
    }

    return 0;
}

 void bfs(int n, int source,int e)
 {


     int color[250]={0},c=0,d=0,k=0;
     vector<int>v1,v2;
       v1.clear();
        v2.clear();
        v1.push_back(source);
           color[source]= white;
         for(int loop=0;loop<n;loop++)
         {

             for(int i=0;i<v1.size();i++)
             {
                 int u=v1[i];
                 for(int j=0;j<G[u].size();j++)
                 {
                    int  v=G[u][j];
                     if(color[v]!=white || color[v]!=black)
                     {
                         if(color[u]==white)
                               color[v]=black;
                          else  if(color[u]==black)
                             color[v]=white;

                             c++;
                                v2.push_back(v);
                     }
                     else if(color[v]==white||color[v]==black)
                     {
                         if((color[v]==white && color[u]==white)||(color[u]==black&&color[v]==black))
                         {
                             d++;
                               break;
                         }
                          else if((color[v]==white&&color[u]==black)||(color[v]==black&& color[u]==white))
                            {
                                c++;
                                 v2.push_back(v);

                                continue;
                              }
                     }

                      }
                        if(d!=0)
                      {
                            k++;
                             break;


                      }
                 }

                if(k!=0)
                 {
                printf("NOT BICOLORABLE.\n");
                   break;

                 }
              else
              {
                  v1.clear();
                   v1=v2;
                   v2.clear();

              }
         }
                   if(c==e)
                        printf("BICOLORABLE.\n");



 }
