#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;


 long long int a,b,c,d,e,f,n;
  long long int factor(long long int n);


    long long int dp[10010];
int main()
{
    int t,cse=1;

    scanf("%d",&t);
    while(t--)
    {
        memset(dp,0,sizeof(dp));

        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);

        long long int res=factor(n);

        printf("Case %d: %lld\n",cse++,res%10000007);

    }

    return 0;
}

long long int factor( long long int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=0)
     return dp[n];
    else
    {


    dp[n]=(( factor(n-1) + factor(n-2))%10000007 + (factor(n-3)+ factor(n-4))%10000007 + (factor(n-5)+ factor(n-6))%10000007 );
   return dp[n];
    }
}
