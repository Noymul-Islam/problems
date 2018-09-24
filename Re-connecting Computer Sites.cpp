#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>

using namespace std;
struct edge
{
    long long int u,v,cost;
};
long long int par[100005];
vector<edge>e;
long long int find(long long int r);
long long int mst(long long int node);

bool comp(edge p , edge q)
{

    return p.cost<q.cost;
}
 int main()
{
    long long int node,c=0;
    //cin>>node;
    while(scanf("%lld",&node)==1)
 {

    long long int f_cost=0;

    for(long long int i=1; i<=node-1; i++)
    {
        long long int a,b,cost;
        cin>>a>>b>>cost;
        f_cost+=cost;

    }
    long long int k;
    cin>>k;
    edge get;
    while(k--)
    {
        long long int a,b,cost;
        cin>>a>>b>>cost;
        get.u=a;
        get.v=b;
        get.cost=cost;
        e.push_back(get);

    }
    long long int m;
    cin>>m;
    while(m--)
    {
        long long int a,b,cost;
        cin>>a>>b>>cost;
        get.u=a;
        get.v=b;
        get.cost=cost;
        e.push_back(get);
    }
    long long int res=mst(node);
    if(c==1)
         {
printf("\n");}
    c=1;


    printf("%lld\n",f_cost);
    //if(res<=f_cost)
        printf("%lld\n",res);
        e.clear();


}
    return 0;
}

long long int mst(long long int node)
{
    for(long long int i=1; i<=node; i++)
        par[i]=i;
    long long int count=0,s=0;
    sort(e.begin(),e.end(),comp);
    for(long long int i=0; i<(long long int)e.size(); i++)
    {
        long long int u=find(e[i].u);
        long long int v=find(e[i].v);
        if(u!=v)
        {

            par[find(v)]=find(u);
            count++;
            s=s+e[i].cost;
           if(count==node-1)
               return s;
        }

    }
//return s;
}
long long int find (long long int r)
{

    if(par[r]==r)
        return r;
    else
        return par[r]=find(par[r]);
}
