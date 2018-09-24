e----

Degrees of seperation
ekhane mapping + BFS aase dekhis.
#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<queue>
#include<vector>
using namespace std;

#define SZ 55

map< string,int>node;
vector< int > edge[SZ];
queue< int >visit;

bool colour[SZ];
int cost[SZ];

int BFS(int nodes);

int main()
{
    char name1[100],name2[100];
    int nodes,ways,Max,i,j,a_ssign,a,b,Case=0;

    while(scanf("%d %d",&nodes,&ways)==2 && nodes && ways)
    {
        node.clear();
        a_ssign=0;
        for(i=1;i<=ways;++i)
        {
            scanf("%s %s",name1,name2);

            if(node.find(name1)==node.end())
                node[name1]=a_ssign++;
            if(node.find(name2)==node.end())
                node[name2]=a_ssign++;

            a=node[name1];
            b=node[name2];

            edge[a].push_back(b);
            edge[b].push_back(a);
        }

        Max=BFS(nodes);

        if(Max>=0)
            printf("Network %d: %d\n\n",++Case,Max);
        else
            printf("Network %d: DISCONNECTED\n\n",++Case);

        for(i=0;i<nodes;++i)
            edge[i].clear();
    }
    return 0;
}
int BFS(int nodes)
{
    while(!visit.empty())
        visit.pop();

    int i,j,u,v,flag=1,Max=0;
    for(i=0;i<nodes;++i)
    {
        memset(colour,0,sizeof(colour));
        memset(cost,-1,sizeof(cost));

        colour[i]=1;
        cost[i]=0;
        visit.push(i);

        while(!visit.empty())
        {
            u=visit.front();
            visit.pop();

            for(j=0;j<edge[u].size();++j)
            {
                v=edge[u][j];
                if(!colour[v])
                {
                    colour[v]=1;
                    cost[v]=cost[u]+1;
                    visit.push(v);
                }
            }
        }
        for(j=0;j<nodes;++j)
        {
            if(cost[j]>Max)
                Max=cost[j];
            else if(cost[j]==-1)
            return -1;
        }
    }
    return Max;
