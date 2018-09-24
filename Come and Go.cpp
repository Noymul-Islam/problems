#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

struct node
{
    int pos,time;

};

node timing[2010];

vector<int>edge[2010],revedge[2010];
int color[2010];
void dfs(int u);
void ssc(int u);
int n,m,count;
int main()
{
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)
            break;
        timing[0].pos=0;
        timing[0].time=0;
        int ss=0;
        count=0;
        int num=0;
        for(int i=1; i<=m; i++)
        {
            int u,v,p;
            cin>>u>>v>>p;


            if(p==1)
            {
                //num++;
                  edge[u].push_back(v);
                  revedge[v].push_back(u);
            }
            else
            {
                edge[u].push_back(v);
                  revedge[v].push_back(u);
                edge[v].push_back(u);
                revedge[u].push_back(v);

            }

        }
        memset(color,0,sizeof(color));
        for(int i=1; i<=n; i++)
            timing[i].pos=i;
        for(int i=1; i<=n; i++)
        {
            if(!color[i])
            {
                color[i]=1;
                dfs(i);


            }
        }

        for(int i=1; i<n; i++)
            for(int j=i+1; j<=n; j++)
            {
                node temp;
                if(timing[i].time<timing[j].time)
                {
                    temp=timing[i];
                    timing[i]=timing[j];
                    timing[j]=temp;

                }

            }
        memset(color,0,sizeof(color));
        for(int i=1; i<=n; i++)
        {
            if(!color[timing[i].pos])
            {
                color[timing[i].pos]=1;
                ssc(timing[i].pos);

                ++ss;
            }


        }
        if(ss==1)
            printf("1\n");
        else
            printf("0\n");
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
    ++count;

    for(int i=0; i<edge[u].size(); i++)
    {
        int v=edge[u][i];
        if(!color[v])
        {

            color[v]=1;
            dfs(v);
        }

    }
    timing[u].time=++count;
}
void ssc(int u)
{
    for(int i=0; i<revedge[u].size(); i++)
    {
        int v=revedge[u][i];

        if(!color[v])
        {

            color[v]=1;
            ssc(v);
        }

    }


}
