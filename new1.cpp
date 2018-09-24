
#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>

using namespace std ;

 long long int fun(long long int i,long long int  amount);
long long int dp[12][40000];
double next;
long long  make ;

 long long int coin[]={100*100,50*100,20*100,10*100,5*100,2*100,1*100,0.5*100,0.2*100,0.1*100,0.05*100};

  int main()
 {
     memset(dp,-1,sizeof(dp));
 char ch;
 long long int p;
     while(scanf("%lld %c %lld",&make,&ch,&p)==3&&!(make==0&&p==0))

     {
         //for(int i=0;i<11;i++)
           //printf("%lld\n",coin[i]);
         //f(make==0.00)
            //break;

            // next=(make*100);
            //printf("1");
                     long long mak=make*100+p;
                     printf("%lld\n",mak);
         long long int ans=fun(0,make);
   //printf("%lf ",next);
   double nxt=(double)make/100;
         printf("%6.2lf%17lld\n",nxt,ans);


     }


     return 0;
 }
 //int c=0;
 long long int fun(long long int  i, long long int  amount)
 {
    /*if(c==0)
    {
        //printf("%lld\n",amount);
        if(amount>(double)next)
        amount=amount-(amount-(double)next);
        else
        {
            amount=amount+((double)next-amount);
        }
        printf("%lld\n",amount);
        c++;
    }*/
     if(i>=11)
     {
         if(amount==0)
            {
                printf("0");
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

