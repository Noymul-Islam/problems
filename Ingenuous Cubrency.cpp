#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
#include<cstring>

using namespace std ;
long long int dp[100][10000];
int coin[500];
long long int n;
long long int fun(long long int i, long long int amount);
int main()
{
     int k=1,i;
    for( i=0;;i++ )
    {

        coin[i]=k*k*k;
        if(k*k*k==9261)
         break;
        k++;


    }
    n=i+1;
    memset(dp,-1,sizeof(dp));
    long long int make;
    while(scanf("%lld",&make)==1)
    {


     long long int res=fun(0,make);
     printf("%lld\n",res);
    }
    return 0;
}
long long int fun(long long int i, long long int amount)
{
    if(i>=n)
    {
        if (amount==0)
        return 1;
        else
        return 0;
    }
    if(dp[i][amount]!=-1)
    return dp[i][amount];
   long long  int ret1=0,ret2=0;
    if(amount-coin[i]>=0)
    {

        ret1=fun(i,amount-coin[i]);
    }

    ret2=fun(i+1,amount);

    return dp[i][amount]=ret1+ret2;
}
