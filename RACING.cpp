#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

struct data
{
    int u,v,w;
};
bool comp(data p,data q)
{
    return p.w>q.w;
}
int par[10010];
vector<data>e;
int mst(int n);
int find(int r);
int main()
{
    int t,z;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            data get;
            get.u=u;
            get.v=v;
            get.w=w;
            e.push_back(get);

        }
        int res=mst(n);
        printf("%d\n",res);
        e.clear();

    }
    cin>>z;


return 0;
}
int mst(int n)
{
    for(int i=0;i<=n;i++)
         par[i]=i;
          int s=0;
    sort(e.begin(),e.end(),comp);
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            par[v]=u;


        }
        else if(u==v)
        {
            s=s+e[i].w;

        }

    }
    return s;
}

int find(int r)
{
    if(par[r]==r)
          return r;
    else
        return par[r]=find(par[r]);
}
