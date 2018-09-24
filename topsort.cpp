#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<cstdlib>
using namespace std;

#define MAX 105

vector< int >edge[MAX];
int indegree[MAX];
int Count,nodes;

void topsort(int node);

int main()
{
int cond,x,y,i,j;

while(scanf("%d %d",&nodes,&cond)==2 && (nodes || cond))
{
memset(indegree,0,sizeof(indegree));

for(i=1;i<=cond;++i)
{
scanf("%d %d",&x,&y);

edge[x].push_back(y);
++indegree[y];
}
Count=0;

for(i=1;i<=nodes;++i)
{
if(!indegree[i])
{
++Count;
topsort(i);
}
}
printf("\n");
for(i=1;i<=nodes;++i)
edge[i].clear();
//for(int i=0;i<nodes;i++)
    //printf("%d\n",indegree[i]);
}

return 0;
}
void topsort(int node)
{
indegree[node]=-1;
if(Count==1)
printf("%d",node);
//else if(Count==nodes)
//printf(" %d\n",node);
else
printf(" %d",node);

int i,j;
//Count=0;
for(j=0;j<edge[node].size();++j)
{
i=edge[node][j];

--indegree[i];
if(!indegree[i])
{
++Count;
topsort(i);
}
}
return;
}
