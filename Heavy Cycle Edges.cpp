#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;
int find(int r);
int mst(int node);
struct data
{
    int u,v,w;

};
bool comp(data p ,data q)
{
    return p.w<q.w;
}
vector<data>e;
vector<int>result;
int par[1005];
int main()
{
     int n,m;
     while(scanf("%d %d",&n,&m)==2&&(n!=0&&m!=0))
     {
      for(int i=0;i<m;i++)
      {
          int u,v,w;
          data get;
          cin>>u>>v>>w;
          get.u=u;
          get.v=v;
          get.w=w;
          e.push_back(get);
      }
     int res=mst(n);
     if(res==0)
        printf("forest\n");
     else
     {
         sort(result.begin(),result.end());
         for(int i=0;i<result.size();i++)
         {
             if(i==0)
                 printf("%d",result[i]);
             else
             printf(" %d",result[i]);
            // if(i!=result.size()-1)
              //    printf(" ");
         }
         printf("\n");

     }
     e.clear();
         result.clear();
     }
    return 0;
}
int mst(int n)
{

    for(int i=0;i<n;i++)
         par[i]=i;
         sort(e.begin(),e.end(),comp);
         int cost=-1;
         for(int i=0;i<(int)e.size();i++)
         {
             int u=find(e[i].u);
             int v=find(e[i].v);
             if(u!=v)
             {
                 if(cost<e[i].w)
                    cost=e[i].w;
                 par[find(v)]=find(u);
             }
             else if(u==v)
             {
                 if(cost<e[i].w);
                 cost=e[i].w;
                 result.push_back(cost);
                 cost=-1;
             }

         }
         //printf("%d\n",result.size());
         if(result.size()==0)
            return 0;
         else
            return 1;
}


 int find ( int r)
{

    if(par[r]==r)
        return r;
    else
        return par[r]=find(par[r]);
}
