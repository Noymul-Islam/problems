#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<cstring>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;

int find (int r);
 long long int mst(int n);
  int find(int r);
 int par[100000];
 struct edge
 {
     int u,v;
      long long int w;

 };

vector<edge>e;
bool comp (edge p, edge q)
{
    return (p.w<q.w);
}
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)==2)
{
     //getchar();
      if(m==0&&n==0)
           break;

      map<string,int>mp;
      set<int>S;
     int assign=0;
     for(int i=0;i<n;i++ )
        {
            char ch[15];
             scanf("%s",ch);
             mp[ch]=assign++;

        }
        for(int i=0;i<m;i++)
        {
            edge data;

            char ch[15],ch1[15];
             int p;

            scanf(" %s %s %d",ch,ch1,&p);
            data.u=mp[ch];
            data.v=mp[ch1];
            data.w=p;
            e.push_back(data);

        }

         char s1[16];
          scanf(" %s",s1);

        if(m==0&&n>1)
           {
               printf("Impossible\n");
              continue;
           }
           else if(m==0&&n==1)
           {
               printf("0\n");
               continue;
           }
         long long int res=mst(n);
         //for(int i=0;i<n;i++)

        for(int i=0;i<n;i++)
        {
             printf("%d ",par[i]);
            int k=find(i);
            S.insert(k);

        }
            if(S.size()>1)
             printf("Impossible\n");
        else
             printf("%lld\n",res);
        S.clear();
        mp.clear();
        e.clear();
        memset(par,0,sizeof(par));


}


    return 0;
}
long long int mst(int n)
{
    int count =0;
      long long int s=0;
    for(int i=0;i<n;i++)
          par[i]=i;
    sort(e.begin(),e.end(),comp);
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
         int v= find(e[i].v) ;

         if(u!=v)
         {
             count++;
             par[find(u)] =find(v);
            s=s+e[i].w;
            if(count ==n-1)
                  break;
         }
    }

    return s;
}
int find(int r)
{
     if(par[r]==r)
          {
              //
              return r;
          }
      else
        return par[r]=find(par[r]);
 }
 /*int find(int r)
 {
     if(par[r]==r)
     {

      // printf("%d\n",r);
          return r;
     }
     else
         find(par[r]);

 }*/


