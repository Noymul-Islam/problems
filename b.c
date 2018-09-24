#include<stdio.h>

int main()

{
    int a,b;

    while(scanf("%d",&a)==1)

    {
        for(b=1;b<=a;b++)
        {

            int c[4],i,j,m,n;

            for(i=0;i<4;i++)
            {
                scanf("%d",&c[i]);


            }

            for(i=0;i<3;i++)
            {
                for(j=i+1;j<=3;j++)
                {
                    if(c[i]<c[j])
                    {

                        m=c[j];
                        c[j]=c[i];
                        c[i]=m;

                    }
                }
            }

            if((c[0])<=(c[1]+c[2]+c[3]))
                 printf("Case %d: Okay\n",b);

            else
                 printf("Case %d: Not Okay\n",b);

        }



    }

    return 0;
}
