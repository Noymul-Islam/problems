#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int n,m,k,d;
int dijkstra(int source , int dest);

vector<int>graph[20005],cost[20005];


struct data
{
    int node,dist;
    bool operator<(const data &p) const {

      return dist>p.dist;}
};
struct  edge
{
  int u,v,w;

}take;
vector<edge>e;
bool comp(edge p , edge q)
{
    return p.w<q.w;
}

int main()
{
    int cs=1,t;
    cin>>t;
    while(t--)
    {

     scanf("%d %d %d %d",&n,&m,&k,&d);

     for(int i=0;i<m;i++)
     {
         int u,v,w;
         cin>>u>>v>>w;
         graph[u].push_back(v);
         graph[v].push_back(u);
         cost[u].push_back(w);
         cost[v].push_back(w);

     }
     for(int i=0;i<k;i++)
     {
         int u,v,w;
         cin>>u>>v>>w;

         take.u=u;
         take.v=v;
         take.w=w;

            e.push_back(take);

     }
     int mn=10000000,z=0;
     for(int i=0;i<k;i++)
     {
        int j=i;
        for(int a=i;a<=j+d;a++)
        {
            z=1;
            int u,v,w;
            u=e[i].u;
            v=e[i].v;
            w=e[i].w;
            graph[u].push_back(v);
            graph[v].push_back(u);
         cost[u].push_back(w);
          cost[v].push_back(w);
          int res=dijkstra(0,n-1);
          mn=min(mn,res);

        }


     }
     if(z==0)
     {int res=dijkstra(0,n-1);
       mn=min(mn,res);
     }
     //sort(e.begin(),e.end(),comp);
       // for(int i=0;i<d;i++)
        //{
          //  int u,v,w;
            //u=e[i].u;
            //v=e[i].v;
            //w=e[i].w;
            //graph[u].push_back(v);
            //graph[v].push_back(u);
         //cost[u].push_back(w);
          //cost[v].push_back(w);

        //}
        //int res=dijkstra(0,n-1);
           if(mn==-1||m==0)
           printf("Case %d: Impossible\n",cs++);
           else
           printf("Case %d: %d\n",cs++,mn);
           for(int i=0;i<20005;i++)
           {
               cost[i].clear();
               graph[i].clear();
           }
           e.clear();
    }
   // for(int i=0)
    return 0;
}



int dijkstra(int source , int dest)
{
    int d[20005];
     for(int i=0;i<20005;i++)
          d[i]=100000000;

    d[source]=0;
    priority_queue<data>q;

    data u,v;
    u.node =source ;
    u.dist=0;
    q.push(u);
    while(!q.empty())
{



    u=q.top();
    //arr[++c]=u.node;
     q.pop();
     int p=u.node;
      if(p==dest)
          return d[p];
      int ucost=d[u.node];
      for(int i=0;i<graph[u.node].size();i++)
      {

          v.node=graph[u.node][i];
          v.dist=cost[u.node][i]+ucost;
          if(d[v.node]>v.dist)
          {

              d[v.node]=v.dist;

             // par[v.node]=u.node;
              q.push(v);


          }

      }


}
 return -1;
}
