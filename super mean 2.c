#include<stdio.h>

int main()
{
    int a,b;

    while(scanf("%d",&a)==1)
    {

        for(b=1;b<=a;b++)
        {
            int m,i,j;
            scanf("%d",&m);
            float c[m],res,sum=0;

            for(i=0;i<m;i++)
                scanf("%f",&c[i]);
                if(m==1)
                     printf("Case #%d: %.3f\n",b,c[0]);
                else
                {


      j=m-1;

            while(j>=1)
            {



              for(i=0;i<m-1;i++)
              {
                  sum=c[i]+c[i+1];
                  res=sum/2;
                  c[i]=res;



              }
              m--;
              j--;






            }
            printf("Case #%d: %.3f\n",b,c[0]);
                }

        }


    }

    return 0;
}
