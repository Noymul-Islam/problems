#include<stdio.h>

int main()
{
    int a,b;

    while(scanf("%d",&a)==1)
    {
        for(b=1;b<=a;b++)
        {


    int m;
    scanf("%d",&m);

        float c[m],res,sum=0;
        int i,j;

        for(i=0;i<m;i++)
        {scanf("%f",&c[i]);
        sum=sum+c[i];
        }

        res=sum/m;

        printf("Case #%d: %.3f\n",b,res);

        }
    }

    return 0;


}
