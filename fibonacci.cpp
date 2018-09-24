#include<cstdio>
#include<cstring>
#include<cmath>
#include"BigIntegerLibrary.h"
using namespace std;
long long int fib( long long int n)
{
   long long int t;
   long long int i=1;
    long long int h= 1;
   long long  int j=0;

  long long int k=0;
    while(n>0)
    {
        if(n%2==1)
        {
          t=j*h;
          j=i*h+j*k+t;
          i=i*k+t;

        }
        t=h*h;
        h=2*k*h+t;
        k=k*k+t;
        n=(long long int) n/2;


    } BigInteger

    return j;
}


main()
{

    long long int n,m;
    while(scanf("%lld",&n)==1)

    {m=fib(n);

     printf("The Fibonacci Number for %lld is %lld\n",n,m);
}
}
