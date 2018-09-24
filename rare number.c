#include<stdio.h>

int main()
{
    long long int a;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
              break;
        long long int b,i,j,m,n;
        for(i=a+1;;i++)
        {
            b=i/10;
            m=i-b;
            if(m==a)
                   printf("%lld",i);
            if(m>a)
            {
                printf("\n");
                break;
            }


        }


    }
    return 0;

}
