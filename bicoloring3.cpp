#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
using namespace std;

#define white 1
#define black 0
void bfs(int n, int source,int e);
vector<int>G[500];
int main()
{

    int n,e;
     while(scanf("%d",&n)==1)
    {
        if(n==0)
              break;
        scanf("%d",&e);
         int i,j,m;
         for(i=0;i<e;i++)
         {
             int x,y ;
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
      int i,j,k=0,c=0,d=0;
       vector<int>v1,v2;
       int color[500];
       color[source]= white;
       v1.push_back(source);
       for(int loop=1;loop<n;loop++)
       {
           for(int i=0;i<v1.size();i++)
           {
               int u=v1[i];
               for(int j=0;j<G[u].size();j++)
               {
                   int v=G[u][j];
                   if(color[v]!=white || color[v]!=black)
                   {
                       if(color[u]==white)
                           color[v]=black;
                        else if(color[u]==black)
                              color[v]=white;
                        c++;
                        v2.push_back(v);
                   }
                   else if(color[u]==color[v])
                   {
                       d++;
                        break;
                   }
                   else
                     c++;
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
            if(v2.empty())
               break;

           if(!v2.empty())
           {
               v1.clear();
               v1=v2;
               v2.clear();


           }
       }
       if(c==e)
          printf("BICOLORABLE.\n");


  }

