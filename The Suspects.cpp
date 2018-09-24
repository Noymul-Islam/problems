#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

int color[30000];
vector<int>g[30000];
 void dfs(int u);
   int n,m,number;
int main()
{
     while(scanf("%d %d",&n,&m)==2)
     {
         if(m==0&&n==0)
              break;
              while(m--)
              {
                  int k;
                  cin>>k;
                  int ar[k];
                  for(int i=0;i<k;i++)
                      cin>>ar[i];
                  for(int i=0;i<k-1;i++)
                    for(int j=i+1;j<k;j++)
                  {
                      g[ar[i]].push_back(ar[j]);
                      g[ar[j]].push_back(ar[i]);

                  }

              }
              memset(color,0,sizeof(color));
            number=1;
            dfs(0);
            printf("%d\n",number);
              for(int i=0;i<30000;i++)
                 g[i].clear();
     }

    return 0;
}
void dfs(int u)
{
    if(color[u]==1)
          return;

    color[u]=1;
    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(!color[v])
        {
            number++;
            dfs(v);
        }

    }
 return ;
}
