#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
int mst(int n);
int find(int r);
 //int res;
int par[500];
struct edge
{
    int u,v,w;
    bool operator<(const edge &p) const
    {
        return w>p.w;

    }

};
vector<edge>e;

int main()
{

    int t,k=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
         //res=100000000;
         scanf("%d %d",&n,&m);
         for(int i=0;i<m;i++)
         {

             int u,v,w;
              scanf("%d %d %d",&u,&v,&w);
              edge data;
              data.u=u;
              data.v=v;
              data.w=w;
              e.push_back(data);
         }
         int ret=mst(n);
        printf("Case #%d: %d\n",k++,ret);
        e.clear();

    }
    return 0;
}
int mst( int n)
{
    int count =0,res=100000000;
    for(int i=0;i<500;i++)
          par[i]=i;
    sort(e.begin(),e.end());
    for(int i=0;i<(int)e.size();i++)
    {

        int u=find(e[i].u);
         int v=find(e[i].v);
        if(u!=v)
        {

            count ++;
            par[find(u)]=find(v);
            if(res>e[i].w)
            {

                res=e[i].w;
            }

            if(count==n-1)
                break;
        }

    }

return res;
}
int find(int r)
 {
     if(par[r]==r)
          return r;
     else
         return par[r]=find(par[r]);

 }
