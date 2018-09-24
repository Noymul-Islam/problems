#include<stdio.h>

int main()
{
    long long int a,b;

    while(scanf("%lld",&a)==1)
    {
        for(b=1;b<=a;b++)
        {
            long long int i,j,m=0,n=1,res,c;
            scanf("%lld",&c);
            for(i=0;i<=c;i++)
            {
                res=m+n;
                m=n;
                n=res;

            }
            printf("Scenario #%lld:\n%lld\n\n",b,n);



        }


    }

return 0;
}
