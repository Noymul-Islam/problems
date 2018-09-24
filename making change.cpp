#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<vector>

using namespace std ;

int dp[100][1000];
int coin[]={5,10,20,50,100,200};
int value[6];

int fun(int i, int amount );
int n,m;
int c1=10000,c2=0;
int main()
{
    char ch[5];

    while(scanf("%d %d %d %d %d %d %s",&value[0],&value[1],&value[2],&value[3],&value[4],&value[5],ch)==7&&!(value[0]==0&&value[1]==0&&value[2]==0&&value[3]==0&&value[4]==0&&value[5]==0))
   {

       int x=strlen(ch);
       int i;
       n=0,m=0;
       memset(dp,-1,sizeof(dp));
       for(i=0;i<x;i++)
       {
           if(ch[i]=='.')
             break;
             n=n*10+ch[i]-'0';

       }
       for(int j=i+1;j<x;j++)
       {
           m=m*10+ch[j]-'0';

       }
       //printf("%d %d\n",n,m);
       n=n*100+m;
       //printf("%d",n);

    int res=fun(0,0);
       printf("%d\n",c1);
   }

    return 0;
}
int fun(int i, int amount)
{

    if(i>=5)
    {
        if(amount==n)
        {
            if(c1>c2)
            {
                c1=c2;
                c2--;
                return c2;
            }

            else
            {
                c2--;
                return c2;

            }
        }}
        if(amount==n)
        {
            if(c1>c2)
            {
                c1=c2;
                c2--;
                return c2;

            }
        }
        else if(amount>n)
        {
            c2--;
            return c2;

        }

    if(dp[i][amount]!=-1)
    return dp[i][amount];

    int ret1=0,ret2=0;
    for(int take=1; take<=value[i]; take++)
    {

        if(amount+coin[i]*take<=n)
        {
           printf("1");
            c2++;
            ret1=fun(i+1,amount+coin[i]*take);

        }
        else
            break;

    }
    ret2=fun(i+1,amount);
    return dp[i][amount]=min(ret1,ret2);
}


