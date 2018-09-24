#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct edge{
            int u,v;
            double w;
            bool operator <(const edge&p) const
             {
                 return w<p.w;

             }

           };
vector<edge>e;
int parent[10000];

int find (int r)
{
    if(parent[r]==r)
           return r;
    else
         return parent[r]=find(parent[r]);
}
double mst(int n)
{

    int count=0;
    double s=0.0;
    for(int i=0;i<10000;i++)
          parent[i]=i;
    sort(e.begin(),e.end());
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
      int v=find(e[i].v);
      if(u!=v)
      {
          count++;
          parent[find(v)]=find(u);

          s=s+e[i].w;
      }

    }
    return s;
}
int main()
{
    int test;
    cin>>test;
    getchar();
    getchar();
    while(test--)
    {
        double co[200][2];
         int n ;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%lf %lf",&co[i][0],&co[i][1]);

        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
        {
            edge data;

            double dist=sqrt(((co[i][0]-co[j][0])*(co[i][0]-co[j][0]))+((co[i][1]-co[j][1])*(co[i][1]-co[j][1])));
            data.u=i;
            data.v=j;
            data.w=dist;
            e.push_back(data);



        }
        double res=mst(n);
        printf("%0.2lf\n",res);
        if(test)
            cout<<"\n";
            for(int i=0;i<e.size();i++)
                  e.clear();
    }
    return 0;
}
