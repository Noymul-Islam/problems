#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#include<iostream>
using namespace std;

struct data{
 int u,v;
 double w;
}get;
/*struct data1
{
    int u,v;
    double w;
}give;*/
bool comp(data p, data q)
{
    return p.w<q.w;
}
/*bool comp1(data1 p, data1 q )
{
    return p.w<q.w;
}*/
int par[10000];
vector<data>e;
//vector<data1>e1;
double  mst(int n);
int find(int r);
int s,p,z;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {

         scanf("%d %d",&s,&p);
         int co[p+1][2];
         for(int i=1;i<=p;i++)
              cin>>co[i][0]>>co[i][1];
         for(int i=1;i<p;i++)
         {
             for(int j=i+1;j<=p;j++)
             {
                 double dest=sqrtf(((co[i][0]-co[j][0])*(co[i][0]-co[j][0]))+((co[i][1]-co[j][1])*(co[i][1]-co[j][1])));
      //         printf("--->%0.2lf\n",dest);
               get.u=i;
               get.v=j;
               get.w=dest;
               e.push_back(get);
             }
         }
        double res= mst(p);


             printf("%0.2lf\n",res);


     e.clear();
    // e1.clear();

     }

    return 0;
}

double mst(int n)
{
    for(int i=1;i<=n;i++)
         par[i]=i;
int    count=0;
 double res=-1;
z=0;
    sort(e.begin(),e.end(),comp);
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            par[find(u)]=find(v);
            count++;
             if(z<p-s)
             {

                 if(res<e[i].w)
                 {
                     res=e[i].w;
                 }
                 z++;
             }
      //  give.u=e[i].u;
        //give.v=e[i].v;
        //give.w=e[i].w;
        //e1.push_back(give);
        if(count==n-1)
                 return res;

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
