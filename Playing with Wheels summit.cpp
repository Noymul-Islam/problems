#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;

#define MAX 10100

bool forbid[MAX];
bool colour[MAX];
int cost[MAX];
queue< int >visit;

int make_num(int kilo,int heca,int deci,int mit);
void BFS(int src,int target);

int main()
{
int tst,a,b,c,d,total,num,src,target,x;

while(scanf("%d",&tst)!=EOF)
{
while(tst--)
{
memset(forbid,0,sizeof(forbid));

scanf("%d %d %d %d",&a,&b,&c,&d);
src=make_num(a,b,c,d);
scanf("%d %d %d %d",&a,&b,&c,&d);
target=make_num(a,b,c,d);

scanf("%d",&total);
//printf("%d %d\n",src,target);
while(total--)
{
scanf("%d %d %d %d",&a,&b,&c,&d);
x=make_num(a,b,c,d);
//printf("%d\n",x);
forbid[x]=1;
}

BFS(src,target);

printf("%d\n",cost[target]);
}
}
return 0;
}
int make_num(int kilo,int heca,int deci,int mit)
{
return ((kilo * 1000)+(heca * 100)+(deci * 10)+mit);
}

void BFS(int src,int target)
{
memset(colour,0,sizeof(colour));
memset(cost,-1,sizeof(cost));

while(!visit.empty())
visit.pop();

colour[src]=1;
cost[src]=0;
visit.push(src);

int u,v,w,digit_1,digit_3,digit_4,digit_2;

while(!visit.empty())
{
u=visit.front();
visit.pop();

digit_4=u%10;
digit_3=(u%100)/10;
digit_2=(u/100)%10;
digit_1=u/1000;
//printf("%d %d %d %d\n",digit_1,digit_2,digit_3,digit_4);
if(!digit_1)
{
v=make_num(1,digit_2,digit_3,digit_4);
w=make_num(9,digit_2,digit_3,digit_4);
}
else if(digit_1==9)
{
v=make_num(0,digit_2,digit_3,digit_4);
w=make_num(8,digit_2,digit_3,digit_4);
}
else
{
v=make_num(digit_1+1,digit_2,digit_3,digit_4);
w=make_num(digit_1-1,digit_2,digit_3,digit_4);
}

if(!forbid[v] && !colour[v])
{
colour[v]=1;
cost[v]=cost[u]+1;
visit.push(v);
if(v==target)
return;
}
if(!forbid[w] && !colour[w])
{
colour[w]=1;
cost[w]=cost[u]+1;
visit.push(w);
if(w==target)
return ;
}
if(!digit_2)
{
v=make_num(digit_1,1,digit_3,digit_4);
w=make_num(digit_1,9,digit_3,digit_4);
}
else if(digit_2==9)
{
v=make_num(digit_1,0,digit_3,digit_4);
w=make_num(digit_1,8,digit_3,digit_4);
}
else
{
v=make_num(digit_1,digit_2+1,digit_3,digit_4);
w=make_num(digit_1,digit_2-1,digit_3,digit_4);
}
if(!forbid[v] && !colour[v])
{
colour[v]=1;
cost[v]=cost[u]+1;
visit.push(v);
if(v==target)
return;
}
if(!forbid[w] && !colour[w])
{
colour[w]=1;
cost[w]=cost[u]+1;
visit.push(w);
if(w==target)
return ;
}
if(!digit_3)
{
v=make_num(digit_1,digit_2,1,digit_4);
w=make_num(digit_1,digit_2,9,digit_4);
}
else if(digit_3==9)
{
v=make_num(digit_1,digit_2,0,digit_4);
w=make_num(digit_1,digit_2,8,digit_4);
}
else
{
v=make_num(digit_1,digit_2,digit_3+1,digit_4);
w=make_num(digit_1,digit_2,digit_3-1,digit_4);
}
if(!forbid[v] && !colour[v])
{
colour[v]=1;
cost[v]=cost[u]+1;
visit.push(v);
if(v==target)
return;
}
if(!forbid[w] && !colour[w])
{
colour[w]=1;
cost[w]=cost[u]+1;
visit.push(w);
if(w==target)
return ;
}
if(!digit_4)
{
v=make_num(digit_1,digit_2,digit_3,1);
w=make_num(digit_1,digit_2,digit_3,9);
}
else if(digit_4==9)
{
v=make_num(digit_1,digit_2,digit_3,0);
w=make_num(digit_1,digit_2,digit_3,8);
}
else
{
v=make_num(digit_1,digit_2,digit_3,digit_4+1);
w=make_num(digit_1,digit_2,digit_3,digit_4-1);
}
if(!forbid[v] && !colour[v])
{
colour[v]=1;
cost[v]=cost[u]+1;
visit.push(v);
if(v==target)
return;
}
if(!forbid[w] && !colour[w])
{
colour[w]=1;
cost[w]=cost[u]+1;
visit.push(w);
if(w==target)
return ;
}
}
return;
}
