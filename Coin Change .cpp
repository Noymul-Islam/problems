#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>

using namespace std ;

 int fun(int i,int amount);
int dp[6][8000];

int make ;

 int coin[]={50,25,10,5,1};

 int main()
 {
     memset(dp,-1,sizeof(dp));

     while(scanf("%d",&make)==1)
     {

         int ans=fun(0,make);

         printf("%d\n",ans);


     }


     return 0;
 }
 int fun(int i, int amount)
 {
     if(i>=5)
     {
         if(amount==0)
            return 1;
            else
             return 0;


     }
     if(dp[i][amount]!=-1)
        return dp[i][amount];
     int ret1=0,ret2=0;

     if(amount-coin[i]>=0)
     {
         ret1=fun(i,amount-coin[i]);


     }
     ret2=fun(i+1,amount);

     return dp[i][amount]=ret1+ret2;


 }
