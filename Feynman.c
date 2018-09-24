#include<stdio.h>

int main()

{
    long long a;

    while(scanf("%lld",&a)==1)
    {


        if(a==0)
               break;

         long long int b,c,d,i,j;

          b=(a*(a+1)*((2*a)+1))/6;


          printf("%lld\n",b);





    }


    return 0;
}
