#include<stdio.h>

int main()
{
    int a,b=1;

    while(scanf("%d",&a)==1)
    {
        if(a<0)
             break;

        int m,n,i,j,sum=0;
        int cre[12],rec[12];
        for(i=0;i<12;i++)
            scanf("%d",&cre[i]);
        for(i=0;i<12;i++)
             scanf("%d",&rec[i]);
             printf("Case %d:\n",b);
              b++;

        if(a>=rec[0])
        {printf("No problem!:D\n");
            sum=sum+(a-rec[0]);

        }
         else
             printf("No problem. :(\n");
         for(i=0;i<11;i++)
         {
            if(sum<0)
                 sum=0;

                 sum=sum+cre[i];

                 if(sum>=rec[i+1])
            {
                printf("No problem!:D\n");

             sum=sum-rec[i+1];


         }
         else
             printf("No problem. :(\n");

    }

}
    return 0;

}
