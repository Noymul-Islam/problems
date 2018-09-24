#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

vector<int>G[1010];

double ar[1010][2];
int  bfs(int start, int dest);
int main()
{
    int v,time;
    while(scanf("%d %d",&v,&time)==2)
    {
        if(time==0&&v==0)
               break;
               double s=v*time*60;
              // cout<<s;
               scanf("%lf %lf %lf %lf",&ar[0][0],&ar[0][1],&ar[1][0],&ar[1][1]);
               getchar();
               char ch[1000];
               int k=2;
               while(gets(ch))
               {
                   if(strlen(ch)==0)
                       break;
                       double a,b;
                   sscanf(ch,"%lf %lf",&a,&b);
                   //cout<<a<<" "<<b<<endl;
                   ar[k][0]=a;
                   ar[k++][1]=b;




               }

               for(int i=0;i<k-1;i++)
               {
                   for(int j=i+1;j<k;j++)
                   {

                     double res=sqrt(((ar[i][0]-ar[j][0])*(ar[i][0]-ar[j][0]))+((ar[i][1]-ar[j][1])*(ar[i][1]-ar[j][1])));
                     //cout<<res<<endl;
                      if(res<=s)
                      {
                          //printf("ok\n");
                          G[i].push_back(j);
                          G[j].push_back(i);

                      }

                   }
               }
               int ans=bfs(0,1);
                if(ans==-1)
                     printf("No.\n");
                else
                    printf("Yes, visiting %d other holes.\n",ans-1);
                    for(int i=0;i<1010;i++)
                         G[i].clear();

    }
    return 0;
}

int bfs(int start,int dest)
{
    queue<int>q;
    int dist[1010];
    int taken[1010];
    memset(taken,0,sizeof(taken));
    memset(dist,-1,sizeof(dist));
     taken[start]=1;
     dist[start]=0;
     q.push(start);
     while(!q.empty())
     {
         int u=q.front();
         q.pop();


         for(int i=0;i<G[u].size();i++)
         {
             int v=G[u][i];
             if(!taken[v])
             {
                 taken[v]=1;
                 dist[v]=dist[u]+1;
                 q.push(v);
                 if(v==dest)
                    return dist[v];


             }


         }

     }

    return dist[dest];
}
