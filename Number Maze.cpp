#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>

using namespace std;
struct data
{
    int node,dist;
    bool operator <(const data &p) const {

           return dist>p.dist;}

};
 vector<int>edge[1000100],cost[1001000];
 int dp[1010000];
 int dijkstra(int source , int dest);
  int ar[1100][1100],number[1100][1100];
   int n,m;
 int main()
 {


     int t;
      scanf("%d",&t);
      while(t--)
      {

         int k=0;
         scanf("%d %d",&n,&m);
         for(int i=0;i<n;i++)
             for(int j=0;j<m;j++)
              scanf("%d",&ar[i][j]);
    for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
         number[i][j]=k++;

         for(int i=0;i<n;i++)
             for(int j=0;j<m;j++)
         {
             if(i>=0&&i<n&&j+1>=0&&j+1<m)
             {
                 edge[number[i][j]].push_back(number[i][j+1]);
                 edge[number[i][j+1]].push_back(number[i][j]);
                 cost[number[i][j]].push_back(/*ar[i][j]*/ar[i][j+1]);
                 cost[number[i][j+1]].push_back(/*ar[i][j]+*/ar[i][j]);
             }
            // if(i>=0&&i<n&&j-1>=0&&j-1<m)
             //{

               //   edge[number[i][j]].push_back(number[i][j-1]);
                // edge[number[i][j-1]].push_back(number[i][j]);
                 //cost[number[i][j]].push_back(/*ar[i][j]*/ar[i][j-1]);
                 //cost[number[i][j-1]].push_back(ar[i][j]+ar[i][j-1]);

             //}
             if(i+1>=0&&i+1<n&&j>=0&&j<m)
             {
                  edge[number[i+1][j]].push_back(number[i][j]);
                 edge[number[i][j]].push_back(number[i+1][j]);
                 cost[number[i][j]].push_back(ar[i+1][j]);
                 cost[number[i+1][j]].push_back(ar[i][j]);





         }
      }
         int ret=dijkstra(number[0][0],number[n-1][m-1]);
         printf("%d\n",ret+ar[0][0]);
         for(int i=0;i<n*m;i++)
         {
             cost[i].clear();
             edge[i].clear();
         }


      }
      return 0;
 }

int dijkstra(int source ,int dest)
{

     for(int i=0;i<1000000;i++)
          dp[i]=100000000;
    priority_queue<data>q;
    data u,v;
    u.node=source;
    u.dist=0;
    dp[source]=0;
    q.push(u);
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        int p=u.node;
        if(p==dest)
             return dp[p];
        int ucost=dp[u.node];
        for(int i=0;i<edge[u.node].size();i++)
        {
            v.node=edge[u.node][i];
            v.dist=ucost+cost[u.node][i];
            if(dp[v.node]>v.dist)
            {
                dp[v.node]=v.dist;

                q.push(v);
            }

        }

    }
    return -1;
}
