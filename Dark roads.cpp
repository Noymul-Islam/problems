#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
using namespace std;

struct edge
{
    int u,v,w;
    bool operator< (const edge &p) const
      {
          return w<p.w;

      }

};
 vector<edge>G;
   int par[250000];
   int find( int r)
   {
       if(par[r]==r)
         return r;
       else
        return par[r]=find(par[r]);
   }
   int mst(int n)
   {

       //memset(par,0,sizeof(par));
        for(int i=0;i<250000;i++)
             par[i]=i;
       sort(G.begin(),G.end());
         int s=0,count=0;
       for(int i=0;i<(int)G.size();i++)
       {
           int u=find(G[i].u);
           int v=find(G[i].v);
           if(u!=v)
           {
               count++;

               par[find(u)]=find(v);

               s=s+G[i].w;


           }
           if(count==n-1)
                  break;


       }
        return s;

   }
int main()
{

    int node, path;

     //map<int,int>mp;
     while(scanf("%d %d",&node,&path)==2)
     {


     if(node==0&&path==0)
          break;
          int max=0;
          int num=1;
     for(int i=1;i<=path;i++)
     {
         int x,y,z;
          scanf("%d %d %d",&x,&y,&z);
            max=max+z;
         edge get;
        get.u=x;
         get.v=y;
         get.w=z;
         G.push_back(get);


     }

     int min=mst(node);
      printf("%d\n",max-min);
      G.clear();
     }
    return 0;
}
