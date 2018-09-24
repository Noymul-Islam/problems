#include<cstdio>
#include<cmath>
#include<iostream>
#include<map>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;

void bfs(int source,int node);
vector<int>G[200002];
map<int,int>mp;
int color[200002];
int taken[200000];
int vam,lyk,ans;
int main()
{
    int test;
    scanf("%d",&test);
    int k=1;
    while(test--)
    {
        vam=0,lyk=0,ans=0;
        int num=1;
        int edge;
        scanf("%d",&edge);
        for(int i=1; i<=edge; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            if(mp.find(x)==mp.end())
            {
                mp[x]=num++;

            }
            if(mp.find(y)==mp.end())
            {
                mp[y]=num++;
            }
            G[mp[x]].push_back(mp[y]);
            G[mp[y]].push_back(mp[x]);

        }

        bfs(1,num-1);
        //if(vam>lyk)
            printf("Case %d: %d\n",k++,ans);
        //else
           // printf("Case %d: %d\n",k++,lyk);

        mp.clear();
        for(int i=0; i<100002; i++)
            G[i].clear();
    }
    return 0;
}
void bfs(int source, int node)
{
    memset(color,0,sizeof(color));
    memset(taken,0,sizeof(taken));
    queue<int>Q;
    for(int i=1; i<=node; i++)
    {
        source=i;
        if(!taken[i])
        {
            taken[source]=1;

            color[source]=2;
            vam++;
            Q.push(source);
            while(!Q.empty())
            {
                int u=Q.front();
                //if(color[u]==0)
                //{
                //color[u]=2;
                //     vam++;
                //}
                Q.pop();
                for(int i=0; i<G[u].size(); i++)
                {
                    int v=G[u][i];
                    if(color[v]==0)
                    {
                        if(color[u]==2)
                        {
                            color[v]=3;
                            lyk++;
                        }
                        else if(color[u]==3)
                        {
                            color[v]=2;
                            vam++;

                        }
                        taken[v]=1;

                        Q.push(v);
                    }

                }

            }
        }
        if(vam>lyk)
             ans=ans+vam;
        else
             ans=ans+lyk;
            vam=0;
         lyk=0;

    }

