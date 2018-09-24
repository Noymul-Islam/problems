#include<cmath>
#include<cstring>
#include<iostream>
#include<cstdio>
#include<cstdio>
using namespace std ;

int dp[1010][35];
int n;
int cost[1010],weight[1010];

int fun(int i, int w);
 //int n,w;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {


        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&cost[i],&weight[i]);


        }
        int num,sum=0;
        scanf("%d",&num);
        while(num--)
        {
            int cap;
               memset(dp,0,sizeof(dp));
            scanf("%d",&cap);

        sum=sum+fun(1,0,cap);
        //printf("1");



        }


        printf("%d\n",sum);

    }

    return 0;
}

 int fun(int i, int w,int cap)
 {


     if(i==n+1)
       return 0;
       if(dp[i][w]!=0)
         {
             //printf(" %d %d %d\n",i,w,dp[i][w]);
             return dp[i][w];}
         int profit1=0,profit2=0;
         if(w+weight[i]<=cap)
         {
             profit1=cost[i]+fun(i+1,w+weight[i],cap);

         }
       profit2=fun(i+1,w,cap);
       dp[i][w]=max(profit1,profit2);
         return dp[i][w];
 }
