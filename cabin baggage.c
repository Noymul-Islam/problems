#include<stdio.h>

int main()
{
    int a,b,sum=0,m,n;
    scanf("%d",&a);
    {
        for(b=1;b<=a;b++)
        {



            double l,wd,d,w;
            scanf("%lf %lf %lf %lf",&l,&wd,&d,&w);

            if((l==56&&wd==45&&d==25&&w<=7)||(l+wd+d<=125&&w<=7))
            {
                printf("1\n");
                sum++;

            }

            else
                printf("0\n");



        }

        printf("%d\n",sum);
    }

    return 0;
}
