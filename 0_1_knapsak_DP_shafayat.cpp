#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std ;

int dp[100][100];
int n,cap;
int cost[100],weight[100];

 int fun(int i, int w)
 {
     if(i==n+1)
       return 0;
       if(dp[i][w]!=-1)
         {
             //printf(" %d %d %d\n",i,w,dp[i][w]);
             return dp[i][w];}
         int profit1=0,profit2=0;
         if(w+weight[i]<=cap)
         {
             profit1=cost[i]+fun(i+1,w+weight[i]);

         }
       profit2=fun(i+1,w);
       dp[i][w]=max(profit1,profit2);
         return dp[i][w];

 }


int main()
{
    memset(dp,-1,sizeof(dp));

    scanf("%d %d",&n,&cap);

    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&weight[i],&cost[i]);


    }
    printf("%d\n",fun(1,0));

}
