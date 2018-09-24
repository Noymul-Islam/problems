#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

  long long int dp[500][500];
   long long int combination(long long int i, long  long int j);
int main()
{
     long long int n,c;
     while(scanf("%lld %lld",&n,&c)==2)
    {
     if(n==0 &&c==0)
       break;

     memset(dp,0,sizeof(dp));




       long long int res=combination(n,c);

      printf("%lld things taken %lld at a time is %lld exactly.\n",n,c,res);

    }
    return 0;
}

long long int combination(long long int i, long long int j)
{

    if(i==j)
       return 1;
       else if(j==0)
         return 1;
         if(dp[i][j]!=0)
               return dp[i][j];

               else
               {
                   dp[i][j]=combination(i-1,j)+combination(i-1,j-1);

                   return dp[i][j];


               }




}
