#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

struct data
{
    int time,pos;
}timing[1000010];
bool comp(data p ,data q)
{
    return p.time>q.time;
}
void dfs(int u);
void scc(int u);
vector<int>edge[1000010];

int sum,num;
int color[1000010];
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         int n,m;

         cin>>n>>m;
         timing[0].pos=0,timing[0].time=0;
         for(int i=0;i<=n;i++)
              color[i]=0;
              num=0;
         while(m--)
         {
             int u,v;
             cin>>u>>v;
             edge[u].push_back(v);
         }
         for(int i=1;i<=n;i++)
              timing[i].pos=i;
              for(int i=1;i<=n;i++)
              {
                  if(!color[i])
                  {
                      color[i]=1;
                      dfs(i);

                  }

              }
              sort(timing,timing+n+1,comp);
              for(int i=0;i<=n;i++)
                  color[i]=0;
              int ans=0;
              for(int i=0;i<n;i++)
              {
                  if(!color[timing[i].pos])
                  {
                      color[timing[i].pos]=1;
                      ans++;
                      scc(timing[i].pos);

                  }

              }
              printf("%d\n",ans);
              for(int i=0;i<=n;i++)
                 edge[i].clear();


     }
    return 0;
}
void dfs(int  u)
{
    ++num;
    for(int i=0;i<edge[u].size();i++)
    {
        int v=edge[u][i];
        if(!color[v])
        {
            color[v]=1;
            dfs(v);
        }
    }
    timing[u].time=++num;
}
void scc(int u)
{
    for(int i=0;i<edge[u].size();i++)
    {
        int v=edge[u][i];
        if(!color[v])
        {
            color[v]=1;
            scc(v);
        }
    }

}
