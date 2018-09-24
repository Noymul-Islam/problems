#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int mst(int n);
int par[100050];
int find(int r);
struct data {
  int u,v;
}get;
 vector<data>e;
int main()
{
    int c=0;
    int u,v,n;
    while(scanf("%d",&u)!=EOF)
    {
        n=0;


        scanf("%d",&v);
        get.u=u;
        get.v=v;
        e.push_back(get);
        while(scanf("%d",&u)==1)
        {

            if(u==-1)
                  break;
              //    printf("4");
            scanf("%d",&v);
            n=max(n,max(u,v));
            get.u=u;
            get.v=v;
            e.push_back(get);
        }
      //  printf("%d",n);
        int res=mst(n);
       // printf("2");
    // if(c)
      //    printf("\n");
     //c=1;
     printf("%d\n",res);
     e.clear();
     //break;
    }

    return 0;
}
int find(int r)
{
    if(par[r]==r)
          return r;
    else
         return par[r]=find(par[r]);

}
int mst(int n)
{
     int count=0;
    // printf("1");
    for(int i=1;i<=n;i++)
           par[i]=i;
    for(int i=0;i<(int)e.size();i++)
    {
        //printf("1");

        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
          //  printf("1");
            par[find(v)]=find(u);
        }
  else {
    count++;
  }
    }
return count;
}
