#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int diajktra(int source , int dest);
vector<int>edge[100],cost[100];
struct data
{
    int node,dist;
    bool operator <(const data &p) const {

           return dist>p.dist;}

};

int main()
{
    int  e,n;

    cin>>n>>e;
    for(int i=0;i<e;i++)

      {

          int u,v,w;
           cin>>u>>v>>w;

           edge[u].push_back(v);
           edge[v].push_back(u);
           cost[u].push_back(w);
           cost[v].push_back(w);

      }

    int ret =diajktra(0,2);
     if(ret==-1)
         printf("No path\n\n");

     else
           printf("%d\n",ret);

    return 0;
}

int diajktra(int source ,int dest)

{
    int d[100];
     for(int i=1;i<100;i++)
          d[i]=10000000;
    priority_queue<data>q;

    data u,v;
    u.node=source;
     u.dist=0;
     d[source]=0;

     q.push(u);
     while(!q.empty())
     {

         u=q.top();
           q.pop();
            int p=u.node;
             if(p==dest)
                  return d[p];
           int ucost=d[u.node];

           for(int i=0;i<edge[u.node].size();i++)
           {
               v.node=edge[u.node][i];
                 v.dist=cost[u.node][i]+ucost;
                 if(d[v.node]>v.dist)
                 {

                     d[v.node]=v.dist;
                     q.push(v);
                 }

           }

     }
      return -1;

}
