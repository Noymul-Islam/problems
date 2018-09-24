#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int co[800][2];
int exist[1000][1000];
int par[100000];
int find(int r);
double mst(int n);


struct edge
{
    int u,v;
    double w;
};
bool comp(edge p,edge  q)
{
    return p.w<q.w;
}


vector<edge>e;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {


        memset(exist,0,sizeof(exist));


        for(int i=1; i<=n; i++)
        {
            scanf("%d %d",&co[i][0],&co[i][1]);


        }
        int m;
        scanf("%d",&m);
        for(int i=1; i<=m; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            exist[x][y]=1;
            exist[y][x]=1;



        }
        for(int i=1; i<n; i++)
            for(int j=i+1; j<=n; j++)
            {
                edge data;
                double dist=sqrtf(((co[i][0]-co[j][0])*(co[i][0]-co[j][0]))+((co[i][1]-co[j][1])*(co[i][1]-co[j][1])));
                //printf("%lf\n",dist);
                data.u=i;
                data.v=j;
                if(exist[i][j]==1)
                    data.w =0.0;
                else
                    data.w=dist;
                e.push_back(data);

            }
        double res=mst(n);

        printf("%0.2lf\n",res);
        e.clear();
    }
    return 0;
}


double mst(int n)
{

    for(int i=0; i<100000; i++)
        par[i]=i;
    sort(e.begin(),e.end(),comp);

    int count =0;
    double s=0.0;
    for(int i=0; i<(int)e.size(); i++)
    {

        int u=find(e[i].u);
        int v=find(e[i].v);

        if(u!=v)
        {
            count ++;
            par[find(u)]=find(v);
            s=s+e[i].w;


            if(count == n-1)
                return s;

        }
    }
}
int find(int r)
{
    if(par[r]==r)
        return r;
    else
        return par[r]=find(par[r]);


}
