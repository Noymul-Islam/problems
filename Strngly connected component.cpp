#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;

#define SZ 20
#define pf printf
#define sf scanf

struct node{
int pos,Time;
};

node Timing[SZ];
int Count,root;
bool colour[SZ];
vector< int >List[SZ],rev_list[SZ];
stack< int >sequ;

bool comp(node a,node b)
{
return (a.Time > b.Time);

}

void DFS(int u)
{
int i,v;
++Count/*++*/;

for(i=0;i<List[u].size();++i)
{
v=List[u][i];

if(!colour[v])
{
//Count++;
colour[v]=1;
DFS(v);
}
}
//pf("Count=%d\n",Count);
Timing[u].Time=++Count/*++*/;

return ;
}
void SCC(int u)
{
int i,v;

for(i=0;i<rev_list[u].size();++i)
{
v=rev_list[u][i];

if(!colour[v])
{
//pf("bbbbb %d\n",v);
colour[v]=1;
sequ.push(v);
SCC(v);
}
}
return ;
}
int main()
{
int nodes,paths,i,u,v,scc=0;
Timing[0].pos=0;
Timing[0].Time=0;
sf("%d %d",&nodes,&paths);

for(i=1;i<=paths;++i)
{
sf("%d %d",&u,&v);

List[u].push_back(v);
rev_list[v].push_back(u);
}

for(i=1;i<=nodes;++i)
Timing[i].pos=i;

for(i=1;i<=nodes;++i)
{
if(!colour[i])
{
colour[i]=1;
DFS(i);
}
}

for(i=1;i<=nodes;++i)
pf("%d --> %d\n",Timing[i].pos,Timing[i].Time);
for(i=1;i<nodes;++i)
for(int j=i+1;j<=nodes;++j)
{
if(Timing[i].Time<Timing[j].Time)
{
node temp=Timing[i];
Timing[i]=Timing[j];
Timing[j]=temp;
}
}
//sort(Timing+1,Timing+nodes,comp);

for(i=0;i<=nodes;++i)
pf("%d --> %d\n",Timing[i].pos,Timing[i].Time);

memset(colour,0,sizeof(colour));

for(i=1;i<=nodes;++i)
{
if(!colour[Timing[i].pos])
{
pf("aaaaaa%d\n",Timing[i].pos);
colour[Timing[i].pos]=1;
//pf("cccc %d\n",Timing[i].pos);
SCC(Timing[i].pos);
sequ.push(Timing[i].pos);
++scc;
pf("SCC=%d\n",scc);
while(!sequ.empty())
{
int x=sequ.top();
sequ.pop();
pf("%d ",x);

}
pf("\n");
}
}

return 0;
}
/*
6 6
1 2
2 3
3 4
4 5
5 6
6 1
*/
