#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

void dfs(int u);
 void scc(int u);

 vector<int>edge[10010],revedge[10010];

 struct data
 {
     int time,pos;
 }timing[10010];
 bool comp(data p, data q )
 {
     return p.time>q.time;
 }
 int num,ss;
     int n,m;
       int color[10010];
        int cs=1;
 int main()
 {
      int t;
       cin>>t;
         while(t--)
         {
               num=0,ss=0;
             cin>>n>>m;
             while(m--)
             {
                 int u,v;
                 cin>>u>>v;
                 edge[u-1].push_back(v-1);
                 revedge[v-1].push_back(u-1);



             }
             for(int  i=0;i<n;i++)
                timing[i].pos=i;
                  memset(color,0,sizeof(color));

             for(int i=0;i<n;i++)
                {

                    if(!color[i])
                    {
                     //   ss++;
                        color[i]=1;
                        dfs(i);

                    }
                }
                sort(timing,timing+n,comp);
           /*     for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
            {
                data temp;
                if(timing[i].time<timing[j].time)
                {
                    temp=timing[i];
                    timing[i]=timing[j];
                    timing[j]=temp;

                }

            }*/
                 memset(color,0,sizeof(color));

                 for(int i=0;i<n;i++)
                 {
                     if(!color[timing[i].pos])
                     {
                         color[timing[i].pos]=1;
                        // ss++;

                    scc(timing[i].pos);
                     ss++;
                     }

                 }
                 printf("Case %d: %d\n",cs++,ss);
                 for(int i=0;i<=n;i++)
                 {
                     edge[i].clear();
                     revedge[i].clear();


                 }

         }
     return 0;
 }
void dfs(int u)
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
