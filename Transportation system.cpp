#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
int find(int r);

 void mst(int n);
int n;
int par[1010];
 double res1,res2;
struct data
{
    int  u,v;
    double w;
};
vector<data>e;
bool comp(data p, data q)
{

    return p.w<q.w;
}
double r;
int state;
int main()
{
    int cs=1,t;
    cin>>t;
    while(t--)
    {

        cin>>n>>r;
        double x,y;
         double positon[n][2];
         for(int i=0;i<(int)n;i++)
         {
             cin>>x>>y;
             positon[i][0]=x;
             positon[i][1]=y;

         }
         data get;
         for(int i=0;i<(int)n-1;i++)
         {
             for(int j=i+1;j<(int)n;j++)
             {
                 get.u=i;
                 get.v=j;
                 get.w=sqrtf(((positon[i][0]-positon[j][0])*(positon[i][0]-positon[j][0]))+((positon[i][1]-positon[j][1])*(positon[i][1]-positon[j][1])));

              e.push_back(get);
             }

         }

         res1=res2=0;
         state=1;

         mst(n);
         int ans1,ans2;
         ans1=res1;
         if(res1-(double)ans1>=0.5)
            ans1++;
         ans2=res2;
         if(res2-(double)ans2>=0.5)
             ans2++;
         printf("Case #%d: %d %d %d\n",cs++,state,ans2,ans1);
         e.clear();


    }


    return 0;
}
void mst(int n)
{
    for(int i=0;i<=n;i++)
          par[i]=i;
    int count =0;
    sort(e.begin(),e.end(),comp);
    for(int i=0;i<(int)e.size();i++)
    {
      int u=find(e[i].u);
      int v=find(e[i].v);
      if(u!=v)
      {
          par[find(v)]=find(u);
          count++;
         if(e[i].w>r)
         {
             res1+=e[i].w;
             state++;
         }
         else
         {
             res2+=e[i].w;
         }
         if(count==n-1)
            break;


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
