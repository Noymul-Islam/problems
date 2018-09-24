#include<stdio.h>

int main()
{
    int a,b=1;

    while(scanf("%d",&a)==1)
    {
        if(a<0)
            break;

        int m,n,i,j,sum=0;
        int cre[13],rec[12];
        cre[0]=a;

        for(i=1; i<13; i++)
            scanf("%d",&cre[i]);
        for(i=0; i<12; i++)
            scanf("%d",&rec[i]);

        printf("Case %d:\n",b);
        b++;



        for(i=0; i<12; i++)
        {


            if(cre[i]>=rec[i])
            {
                printf("No problem! :D\n");
              sum=cre[i]-rec[i];
              cre[i+1]+=sum;
            }
            else
             {
                 printf("No problem. :(\n");
                 cre[i+1]+=cre[i];
             }

        }

    }
    return 0;

}

