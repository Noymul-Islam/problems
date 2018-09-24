#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;

long long int  dp[6][30001];

 long long int  coin[]={1,5,10,25,50};

 long long int  fun(long long int  i, long long int  amount)
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
        long long int  ret1=0,ret2=0;
        if(amount-coin[i]>=0)
        {
            ret1=fun(i,amount-coin[i]);

        }
        ret2=fun(i+1,amount);

        return  dp[i][amount]=ret1+ret2;


 }

   int  main()
{
     memset(dp,-1,sizeof(dp));
     long long int  make;
     while(scanf("%lld",&make)==1)
     {
         long long int  ans=fun(0,make);
                 if(ans==1)
                 printf("There is only 1 way to produce %lld cents change.\n",make);
                 else
         printf("There are %lld ways to produce %lld cents change.\n",ans,make);
     }


    return 0;
}
