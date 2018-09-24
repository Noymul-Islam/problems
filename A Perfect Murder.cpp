#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;

vector<int>G[1010];
int color[1010];
int taken[1010];
int blue,yellow;
int mos,frnd;
int bp[1000][1000];
map<int,int>mp1,mp2;
int edge[10000][2];
void bfs(int source,int node);
int match[1000];
bool seen[1000];
bool bpm(int u)
{
    for(int v=0; v<=blue; v++)
    {
        if(bp[u][v]&&!seen[v])
        {
            seen[v]=1;
            if(match[v]<0||bpm(match[v]))
            {
                match[v]=u;
                return true;
            }
        }

    }
    return false;
}
int max_bpm()
{
    int res=0;
    memset(match,-1,sizeof(match));
    for(int u=0; u<=yellow; u++)
    {
        memset(seen,0,sizeof(seen));
        if(bpm(u))
            res++;
    }

    return res;
}

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        memset(bp,0,sizeof(bp));
        scanf("%d %d",&mos,&frnd);
        blue=0,yellow=0;
        for(int i=0; i<frnd; i++)
        {

            int a,b;
            cin>>a>>b;
            edge[i][0]=a;
            edge[i][1]=b;
            G[a].push_back(b);
            G[b].push_back(a);

        }
        bfs(1,mos);
        int track_blue=0,track_yellow=0;
        for(int i=0; i<frnd; i++)
        {
            if(color[edge[i][0]]==1)
            {
                //printf("sa");
                if(mp1.find(edge[i][0])==mp1.end())
                {

                    mp1[edge[i][0]] =track_blue++;

                }
                if(mp2.find(edge[i][1])==mp2.end())
                {
                    mp2[edge[i][1]]=track_yellow++;

                }
                //      printf("-->%d %d\n",track_blue,track_yellow);
                bp[mp2[edge[i][1]]][mp1[edge[i][0]]]=1;
            }
            else
            {
                if(mp2.find(edge[i][0])==mp2.end())
                {
                    mp2[edge[i][0]]=track_yellow++;

                }
                if(mp1.find(edge[i][1])==mp1.end())
                {
                    mp1[edge[i][1]]=track_blue++;

                }
                bp[mp2[edge[i][0]]][mp1[edge[i][1]]]=1;

            }

        }

        int res=max_bpm();
        //cout<<res<<endl;
        printf("Case %d: %d\n",cs++,mos-res);
        for(int i=0; i<=mos; i++)
            G[i].clear();
        mp1.clear();
        mp2.clear();
    }

    return 0;
}

void bfs(int source,int node)
{

    memset(color,0,sizeof(color));
    memset(taken,0,sizeof(taken));
    queue<int>q;
//     int source;
    for(int i=1; i<=node; i++)
    {
        source=i;
        if(!taken[source])
        {

            color[source]=1;
            blue++;
            taken[source]=1;
            q.push(source);

            while(!q.empty())
            {
                int u=q.front();
                q.pop();

                for(int j=0; j<G[u].size(); j++)
                {
                    int v=G[u][j];
                    if(!color[v])
                    {
                        if(color[u]==1)
                        {
                            color[v]=2;
                            yellow++;

                        }
                        if(color[u]==2)
                        {
                            color[v]=1;
                            blue++;
                        }

                        taken[v]=1;
                        q.push(v);
                    }
                }

            }

        }

    }
}
