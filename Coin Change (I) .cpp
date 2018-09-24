#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int dp[60][1010];
int fun(int i, int amount);

 int coin[60],value[60];
 int n,k;
 int main()
 {
     int t,cases=1;
     scanf("%d",&t);
     while(t--)
     {
         memset(dp,-1,sizeof(dp));
         scanf("%d %d",&n,&k);
           int p=0;
         for(int i=0;i<2*n;i++)
         {
             if(i<n)
               scanf("%d",&coin[i]);
               else
               scanf("%d",&value[p++]);


         }
          int res=fun(0,0);

          printf("Case %d: %d\n",cases++,res%100000007);

     }
     return 0;
 }

  int fun(int i,int amount)
  {
     // printf("Taken=%d value=%d\n",taken,value[i]);

      if(i>=n)
      {
          if(amount==k)


                  return 1;
              else
                 {//printf("Yes\n");
                     return 0;}


      }
      if(amount==k)
            return 1;
              else if(amount>k)
                 return 0;

      if(dp[i][amount]!=-1)
          return dp[i][amount];
          int ret1=0, ret2=0;

          for( int take=1;take<=value[i];take++)
    {

        if(amount + coin[i]*take<=k)
          {

               ret1=ret1+fun(i+1,amount+coin[i]*take)%100000007;

          }

            else break;
          }
            //take=1;
         ret2=ret2+fun(i+1,amount)%100000007;

         return dp[i][amount]=ret1+ret2;


  }

