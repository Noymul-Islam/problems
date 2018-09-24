#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<iostream>
#include<map>
using namespace std;


struct data{
   int u,v,w;
};
bool comp(data p,data q)
{
    return p.w<q.w;
}
int par[2010];
map<string,int>mp;
int find(int r);
int mst(int m);
int c=0;
vector<data>e;
int m,n;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=1,w;
        char ch[15],ch1[15];
          cin>>m>>n;
           // getchar();
          for(int i=0;i<n;i++)
          {
              scanf("%s %s %d",ch,ch1,&w);
              //printf("%s\n",ch1);
              if(mp.find(ch)==mp.end())
              {
                  mp[ch]=count++;
              }
              if(mp.find(ch1)==mp.end())
              {

                  mp[ch1]=count++;
              }
              data get;
              get.u=mp[ch];
              get.v=mp[ch1];
              get.w=w;
              e.push_back(get);
          }
          int res=mst(m);
          if(c)
            printf("\n");
            c=1;
          printf("%d\n",res);
          e.clear();
          mp.clear();
    }
    return 0;
}

int mst(int m)
{
    for(int i=0;i<=m;i++)
         par[i]=i;
    int s=0,count=0;
    sort(e.begin(),e.end(),comp);

    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            par[v]=find(u);
              count++;
              s=s+e[i].w;
              //printf("->%d\n",e[i].w);
              if(count==m-1)
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
