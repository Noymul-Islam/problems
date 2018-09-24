#include<bits/stdc++.h>
using namespace std;

int par[100];
struct data
{
  int u,v,w;
};
vector<data>e;
bool comp(data p , data q)
{
    return p.w<q.w;
}
int find(int r)
{
    if(par[r]==r)
       return r;
    else
       return par[r]=find(par[r]);

}
void mst(int n)
{
    int s=0,count=0;
    for(int i=0;i<=n;i++)
         par[i]=i;
    for(int i=0;i<(int)e.size();i++)
    {
        int u= find(e[i].u);
        int v= find(e[i].v);
        if(u!=v)
        {
            par[v]=find(u);
            count++;
            s=s+e[i].w;
            if(count==n-1)
               break;

        }

    }
    printf("%d\n",s);
}
int main()
{
    int n,ed;
    scanf("%d %d",&n,&ed);
    for(int i=0;i<ed;i++)
    {
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        data get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);

    }
    mst(n);
    return 0;
}
