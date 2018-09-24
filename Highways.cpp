#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

struct data
{
    int u,v;
    double w;

};
struct track
{
    int  u,v;
}way[1000];
bool comp(data p, data q)
{
    return p.w<q.w;

}

vector<data>e;
int par[1000];
int find(int r);
double mst(int n);
 int p=0;
int main()
{
    int t,c=0;
    scanf("%d",&t);
      getchar();
    while(t--)
    {
        if(c)
              printf("\n");
           c=1;
        int n;
        cin>>n;

        int co[n+1][2];
        for(int i=1;i<=n;i++)
              cin>>co[i][0]>>co[i][1];
               int m;
               cin>>m;
                int ar[n+1][n+1];
                memset(ar,0,sizeof(ar));
                for(int i=1;i<=m;i++)
                      {  int u,v;
                          cin>>u>>v;
                          ar[u][v]=1;
                          ar[v][u]=1;
                      }
        if(n==1)
            printf("No new highways need\n");
        for(int i=1;i<n;i++)
        {

            for(int j=i+1;j<=n;j++)
            {
                double dest=sqrtf(((co[i][0]-co[j][0])*(co[i][0]-co[j][0]))+((co[i][1]-co[j][1])*(co[i][1]-co[j][1])));
              //printf("%lf\n",dest);
               data get;
               get.u=i;
               get.v=j;N
               get.w=dest;
            if(ar[i][j]==1)
                  {get.w=0.0;
                  //printf("--->>\n");
                  }
                 // printf("%lf\n",get.w);
            e.push_back(get);
            }
        }
        p=0;
        //track way[n+1];
        double res=mst(n);

        if(res==0)
             printf("No new highways need\n");
        else
        {
            for(int i=0;i<p;i++)
                  printf("%d %d\n",way[i].u,way[i].v);

        }
        e.clear();
    }
    return 0;
}

double mst(int n)
{
    for(int i=0;i<=n;i++)
          par[i]=i;
    int count=0;
     double s=0.0;
     sort(e.begin(),e.end(),comp);

    for(int i=0;i<(int )e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
       // printf("%lf\n",e[i].w);
        if(u!=v)
        {
            par[find(u)]=find(v);


            count++;
            s=s+e[i].w;
            if(e[i].w!=0.0)
            {
                //printf("<---\n");
                      way[p].u=e[i].u;
            way[p++].v=e[i].v;

            }
            if(count==n-1)
                  return s;

        }

    }
}
int find(int r)
{

    if(par[r]==r)
         return r ;
     else
         return par[r]=find(par[r]);
}
