#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<vector>
using namespace std;
void dfs(int i);
vector<int>G[10001];
int color[10001];
int n,m,l,number;
int p=0;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        memset(color,0,sizeof(color));

        number =0;
        int sum=0;
        scanf("%d %d %d",&n,&m,&l);
        for(int i=1;i<=m;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            G[x].push_back(y);
        }
        for(int j=1;j<=l;j++)
        {

            int fall;
            scanf("%d",&fall);
              dfs(fall);

            sum=sum+number;
            number=0;

        }
        printf("%d\n",sum);
        for(int i=0;i<10001;i++)
             G[i].clear();



    }
    return 0;

}
void dfs(int i)
{
    //printf("%d\n",++p);
    if(color[i]==0)
    {


        number++;
         color[i]=1;
        for(int k=0;k<G[i].size();k++)
        {
           //printf("%d\n",G[i][k]);
            dfs(G[i][k]);

        }

    }
    else
         return;

}
