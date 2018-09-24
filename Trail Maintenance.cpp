#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
using namespace std;
struct edge
{
    int u,v,w;
    bool operator  <(const edge &p) const
    {
        return w<p.w;
    }
};
vector<edge>e;
int khoroc[202][202];
int prev=0;
int par[210];
int find(int r)
{
    return (par[r]==r)? r : find(par[r]);

}
int mst(int n)
{
    sort(e.begin(),e.end());

    int count=0;
    int cost =0;
    //printf("-->%d\n",e.size());
    for(int i=0; i<(int)e.size(); i++)
    {
        int u=find(e[i].u);
        int  v=find(e[i].v);
        //printf("%d %d ",u,v);
        if(u!=v)
        {
            par[u]=v;
            count++;
            cost=cost+ e[i].w;
           // printf("%d\n",count);
        }


    }
    prev=cost;

if(count==n-1)
            return cost;
        return -1;

}

int main()
{
    int test;
    scanf("%d",&test);
    int cases=1;
    int n,m;

    while(test--)
    {
    scanf("%d %d",&n,&m);
    int maxi=-1,flag=0;

    printf("Case %d:\n",cases++);
    for(int i=0;i<=n;i++)
       for(int j=0;j<=n;j++)
           khoroc[i][j]=10000000;


    for(int i=0;i<m;i++)
    {
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);

       if(w<khoroc[u][v])
        {edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
        printf("%d\n",mst(n));
        }
        else
           printf("%d\n",prev);
    }

    }


    return 0;
}
