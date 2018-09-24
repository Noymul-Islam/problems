#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;

void dfs(int u);
void scc(int u);

struct data
{
  int  pos,time;

}timing[1010];
vector<int>edge[1010],revedge[1010];
bool comp(data p, data q)
{
    return p.time>q.time;
}

int n,m,sum,num,ss;
map<string,int>mp;
char ch[100],ch1[100];
 int color[1010];
int main()
{
    while((scanf("%d %d",&n,&m)==2))
        {

         getchar();
if(m==0&&n==0)
       break;
        sum=0,num=0,ss=0;
        for(int i=0;i<n;i++)
        {
            gets(ch);

            if(mp.find(ch)==mp.end())
            {
                mp[ch]=num++;

            }

        }
        for(int j=0;j<m;j++)
        {
            gets(ch);
             //getchar();
             gets(ch1);
             edge[mp[ch]].push_back(mp[ch1]);
             revedge[mp[ch1]].push_back(mp[ch]);


        }
        for(int i=0;i<n;i++)

            timing[i].pos=i;
        memset(color,0,sizeof(color));
        for(int i=0;i<n;i++)
        {
            if(!color[i])
            {
                color[i]=1;
                dfs(i);

            }
        }
        sort(timing,timing+n,comp);
        memset(color,0,sizeof(color));
        for(int i=0;i<n;i++)
        {
            if(!color[timing[i].pos])
            {
                color[timing[i].pos]=1;
                ss++;

                scc(timing[i].pos);


            }


        }
        printf("%d\n",ss);
   mp.clear();

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
    ++sum;

    for(int i=0;i<edge[u].size();i++)
    {
        int v=edge[u][i];
        if(!color[v])
        {
            color[v]=1;
            dfs(v);

        }

    }
    timing[u].time=++sum;
}
void scc(int u)
{

    for(int i=0;i<revedge[u].size();i++)
    {

        int v=revedge[u][i];

        if(!color[v])
        {
            color[v]=1;
            scc(v);

        }
    }

}
