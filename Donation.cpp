#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int par[10000];
int mst(int n);
int find(int r);
struct edge
{
    int u,v,w;

};
vector<edge>e;
bool comp(edge p, edge q)
{

    return p.w<q.w;
}
int main()
{
    int t,k=1;
    scanf("%d",&t);

    while(t--)
    {

        int n;
        int sum=0;
        scanf("%d",&n);

        int ar[n][n];
         int c=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                scanf("%d",&ar[i][j]);
                  if(n==1)
                   {printf("Case %d: %d\n",k++,ar[i][j]);
                    c++;
                      break;
                   }
                sum=sum+ar[i][j];

                if(i==j)
                    {
                         if(n!=1)
                        ar[i][j]=0;
                    }
                     if(ar[i][j]==0)
                       continue;
                edge data;
                data.u=i;
                data.v=j;
                data.w=ar[i][j];
                e.push_back(data);
            }
            if(c!=0)
              continue;
        int res=mst(n);
        if(res==-1)
            printf("Case %d: -1\n",k++);
        else
            printf("Case %d: %d\n",k++,sum-res);
              e.clear();
    }

    return 0;
}
int mst(int n)
{
    for(int i=0; i<10000; i++)
        par[i]=i;
    int count=0;
    int s=0;
    sort(e.begin(),e.end(),comp);
    for(int i=0; i<(int)e.size(); i++)
    {

        int  u;
         int v;
        u=find(e[i].u);
        v=find(e[i].v);
        if(u!=v)
        {
            par[find(u)]=find(v);
            count++;
            s=s+e[i].w;
            if(count==n-1)
                return s;



        }

    }
    return -1;
}

int find(int r)
{
    if(par[r]==r)
        return r;

    else
        return par[r]=find(par[r]);

}
