#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;
struct edge
{
    int u,v,w;
  /*  bool operator< (const edge&p) const
    {
        return w>p.w;

    }*/

};
int par[10000];
int find(int r)
{
    if(par[r]==r)
          return r;
    else
         return par[r]=find(par[r]);
   //find(par[r]);

}
vector<edge>e;

 int mst(int n)
 {for(int i=0;i<10000;i++)
  par[i]=i;
     int count =0; int s=0;
      sort(e.begin(),e.end());
     for(int i=0;i<(int)e.size();i++)
     {
         int u=find(e[i].u);
          int v=find(e[i].v);
          if(u!=v)
          {

              //par[u]=v;
               par[v]=find(u);
              count++;
              s=s+e[i].w;
              if(count==n-1)
                  break;
          }

     }
     return s;
 }
int main()
{

    int node, edges;
    cin>>node>>edges;
    for(int i=1;i<=edges;i++)
    {
        int w,u,v;
        cin>>u>>v>>w ;
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }

    cout<<mst(node)<<endl;
    return 0;
}
