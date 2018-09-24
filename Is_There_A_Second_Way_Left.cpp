#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int par[110];
int mst(int n);
int Mst(int n);
int find(int r);
struct data
{
    int u,v,w;
};
struct track
{
    int u,v;
    int flag;
}test[110];
int tot=-1;
bool comp(data p,data q)
{
    return p.w<q.w;
}
vector<data>ed;
 int p=0;
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,e;

        cin>>n>>e;
         p=0;
         int ar[100];
         int z=-1;
        for(int i=0;i<e;i++)
        {
            data get;
            int u,v,w;
            cin>>u>>v>>w;
            get.u=u;
            get.v=v;
            get.w=w;
            ed.push_back(get);

        }
        int res=mst(n);
       if(res==-1&&e!=n-1)
        printf("Case #%d : No way\n",cs++);
       else if(res==1&&e==n-1||(res==-1&&e==n-1))
        printf("Case #%d : No second way\n",cs++);
       else
       {
           p=0;
           for(int i=0;i<n-1;i++)
           {
               //test.flag=0;
               int res1=Mst( n);
              // printf("%d\n",res1);
               //test.flag=1;
               p++;
               ar[++z]=res1;
           }
           sort(ar,ar+z);

           printf("Case #%d : %d\n",cs++,ar[0]);
       }

ed.clear();
    }


    return 0;
}
int mst(int n)
{
    for(int i=0;i<=n;i++)
        par[i]=i;
int count =0;
sort(ed.begin(),ed.end(),comp);
for(int i=0;i<(int)ed.size();i++ )
{
    int u=find(ed[i].u);
     int v=find(ed[i].v);
     if(u!=v)
     {
         //if(ed[i].w>tot)

             test[p].u=u;
             test[p++].v=v;
              // tets[p++].falg=1;

         par[find(v)]=find(u);
         count++;
         if(count==n-1)
            return 1;



     }

}

return -1;
}
int Mst(int n)
{
    for(int i=0;i<=n;i++)
          par[i]=i;
    int count=0,s=0;
    sort(ed.begin(),ed.end(),comp);
    for(int i=0;i<(int)ed.size();i++)
    {
    int u=find(ed[i].u);
    int v=find(ed[i].v);
    if(u!=v)
    {
        if(u==test[p].u&&v==test[p].v)
            continue;
        par[find(v)]=find(u);
        count++;
        s+=ed[i].w;
        if(count==n-1)
            return s;

    }

    }
    return 10000000;
}

int find(int r)
{
    if(par[r]==r)
         return r;
     else
        return par[r]=find(par[r]);

}
