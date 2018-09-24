#include<stdio.h>
#include<math.h>

int main()
{

    long long int n;

    while(scanf("%lld",&n)==1)
    {
        long long int i,j,F=1,m=0,f=0,a,b,c,tot=0;
        if(n==-1)
           break;
       for(i=1;i<=n;i++)
       {
           if(i==1)
              m++;
              else if(i==2)
                {
                    m++;
                    f++;
                }
              else

              {

                a=m;
                b=f;
                m=a+b+1;
                f=a;
              }
       }
       tot=m+f+1;

       printf("%lld %lld\n",m,tot);

    }
    return 0;
}
