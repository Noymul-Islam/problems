#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;



int par[30000];
void Union(int a, int b);

int find(int r);
void init(int n);
int n,m;
int main()
{
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)
              break;
              init(n);
               int mid;
              while(m--)
              {
                  int k;
                  cin>>k;
                  if(k>=2)
                  {
                      int u,v;
                  cin>>u>>v;
                  Union(u,v);
                  mid=v;
                  int num=k-2;

                    while(num--)
                    {
                        cin>>v;
                        Union(mid,v);
                        mid=v;

                    }

                  }

                  else
                  {
                      int p;
                      cin>>p;
                  }


              }
              int res=find(par[0]);
               int number=0;
              for(int i=0;i<n;i++)
              {

                  if(find(par[i])==res)
                       number++;
              }
              printf("%d\n",number);
    }
    return 0;
}
void init(int n)
{
    for(int i=0;i<n;i++)
          par[i]=i;
}
void Union(int a, int b)
{
    int u=find(a);
    int v=find(b);
    if(u!=v)
    {
        par[v]=u;

    }

}
int find (int r)
{
    if(par[r]==r)
        return r;

    else
        return par[r]=find(par[r]);
}
