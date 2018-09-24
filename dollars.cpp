#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>

using namespace std ;

 long long int fun(long long int i,long long int  amount);
long long int dp[12][400000];
double next;
double make ;

 long long int coin[]={100*100,50*100,20*100,10*100,5*100,2*100,1*100,0.5*100,0.2*100,0.1*100,0.05*100};

  int main()
 {
     memset(dp,-1,sizeof(dp));
       char ar[100];
     while(scanf("%s",ar)==1)

     {
         long long int n=0,m=0;
         int x=strlen(ar);
          int i;
         for( i=0;;i++)
         {
             if(ar[i]=='.')
                break;
             n=n*10+ar[i]-'0';

         }
         //for(int i=0;i<11;i++)
           //printf("%lld\n",coin[i]);
           for(int j=i+1;j<x;j++)
           {
               m=m*10+ar[j]-'0';
           }
           n=n*100+m;
           //printf("%lld\n",n);
         if(n==0)
            break;

             //next=(make*1000);

         long long int ans=fun(0,n);
          //printf("%lf ",next);
         printf("%6s%17lld\n",ar,ans);


     }


     return 0;
 }
 int c=0;
 long long int fun(long long int  i, long long int  amount)
 {
    // amount/=10;
   /* if(c==0)
    {

        printf("%lld\n",amount);
        c++;
    }*/
     if(i>=11)
     {
         if(amount==0)
            {
  //              printf("0");
                return 1;}
            else
             return 0;


     }
     if(dp[i][amount]!=-1)
        return dp[i][amount];
     long long int ret1=0,ret2=0;

     if(amount-coin[i]>=0)
     {
         ret1=fun(i,amount-coin[i]);


     }
     ret2=fun(i+1,amount);

     return dp[i][amount]=(long long int)(ret1+ret2);


 }


