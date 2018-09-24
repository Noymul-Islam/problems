#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
#define size 10000000
char ch[size];
long long int big_mod(long long int base, long long int p,long long mod);

void seive()
{
    long long int i,j,root;
    memset(ch,'1',sizeof(ch));
    ch[0]='0';
    ch[1]='0';
    root=sqrt(size);
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {
            for(j=2;j*i<=size;j++)
                 ch[i*j]='0';

        }
    }


}
int main()
{
    seive();
    long long int n;
    while(scanf("%lld",&n)==1)

    {
        if(n==0)
           break;

      long long int i,j,m,res,base=n-1,mod=n;

      res= big_mod(base,n,mod);
      if(((ch[n]=='0')&&(res==base)))
          printf("The number %lld is a Carmichael number.\n",n);
      else
         printf("%lld is normal.\n",n);

    }

return 0;
}

long long int big_mod(long long int base, long long int p,long long mod)

{
    if(p==0)
          return 1;
    if(p%2==0)
    {
        long long int ret=big_mod(base,p/2,mod);
        return ((ret%mod)*(ret%mod))%mod;

    }

    else

        return((base%mod)*(big_mod(base,p-1,mod)%mod)%mod);
}
