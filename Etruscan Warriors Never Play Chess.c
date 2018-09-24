#include<stdio.h>
#include<math.h>
int main()
{
    long long int k,b;

    while(scanf("%lld",&k)==1)
    {

     for(b=1;b<=k;b++)

   {


        long long int m,n,a,i,j,s,d;

        scanf("%lld",&a);

        m=(-1+sqrt(1+(4*1*2*a)))/2;
        n=(-1-sqrt(1+(4*1*2*a)))/2;


        if(m<0)

             printf("%lld\n",n);



        else

            printf("%lld\n",m);




   }

    }

    return 0;
}
