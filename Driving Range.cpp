#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int par[2000000];
struct data
{
    int p,q,w;
};
bool comp(data p,data q)
{
    return(p.w<q.w);

}
vector<data>e;
int mst(int n);
int find(int r);
int main()
{
    int city,road;
    while(scanf("%d %d",&city,&road)==2)
    {
        if(road==0&&city==0)
              break;
        for(int i=0;i<road;i++)
        {
            data value;
            int x,y,z;
            scanf("%d %d %d",&x,&y,&z);
            value.p=x;
            value.q=y;
            value.w=z;

            e.push_back(value);


        }
        int res=mst(city);
        if(res==-1)
            printf("IMPOSSIBLE\n");
        else
            printf("%d\n",res);
            e.clear();
    }
    return 0;
}

int mst(int n)
{
    for(int i=0;i<2000000;i++)
          par[i]=i;

    sort(e.begin(),e.end(),comp);
    int count =0,max=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].p);
        int v=find(e[i].q);
        if(u!=v)
        {
            par[find(u)]=find(v);

            count ++;

            if(max<=e[i].w)
            {
                max=e[i].w;
            }
             if(count==n-1)
                 break;

        }



    }
    if(count==n-1)
          return max;
    else
         return -1;

}
int find(int r)
{

    if(par[r]==r)
         return r;
    else
        return par[r]=find(par[r]);
}
