#include<stdio.h>

int main()
{
    int a,b;

    while(scanf("%d",&a)==1)
    {

        for(b=1;b<=a;b++)
        {
            int c,d=0,i,j,k;
            scanf("%d",&c);
            int n[c];
            for(i=0;i<c;i++)
            {
                scanf("%d",&n[i]);
            }


            for(i=0;i<c-1;i++)
            {
                for(j=i+1;j<c;j++)
                {
                    if(n[i]>n[j])
                    {

                    n[j]^=n[i]^=n[j]^=n[i];


                    }
                }
            }
            for(i=0;i<c;i++)
                 printf("%d\n",n[i]);
            printf("Optimal train swapping takes %d swaps.\n",d);
        }

    }
    return 0;
}
