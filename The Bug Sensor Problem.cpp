#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
struct data
{
    long long int u,v;
    double w;
};
long long int par[1000000],co[1000000][2];
  long long int p,s;
  bool comp(data p, data q)
  {

      return p.w<q.w;
  }
  vector<data>e;
  double mst(long long int n);
  long long int find(long long int r);

 int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        p=0;
        while(1)
        {
            scanf("%lld",&co[p][0]);
            if(co[p][0]==-1)
                 break;
            scanf("%lld",&co[p++][1]);

        }
        for(long long int i=0;i<p-1;i++)
        {

            for(long long int j=i+1;j<p;j++)
            {
                 double dest=sqrtf(((co[i][0]-co[j][0])*(co[i][0]-co[j][0]))+((co[i][1]-co[j][1])*(co[i][1]-co[j][1])));
              data get;
              get.u=i;
              get.v=j;
              get.w=dest;
              e.push_back(get);

            }
        }
        double res=mst(p);
        long long int k=res;
        if(res-(double)k>0)
            k++;
        printf("%lld\n",k);
        e.clear();

    }

    return 0;
}

double mst(long long int n)
{
    for(long long int i=0;i<n;i++)
        par[i]=i;
long long int    count=0,z=0;
double tot=0;
    sort(e.begin(),e.end(),comp);
    for(long long int i=0;i<(long long int)e.size();i++)
    {
        long long int u=find(e[i].u);
        long long int v=find(e[i].v);
        if(u!=v)
        {
            par[v]=u;
            count ++;
            if(z<p-s)
            {
                if(tot<e[i].w)
                {
                    tot=e[i].w;
                }
                z++;
            }
            //return tot;
            if(count==n-1)
                   return tot;

        }

    }

}
long long int find(long long int r)
{

    if(par[r]==r)
        return r;
    else
        return par[r]=find(par[r]);
}
