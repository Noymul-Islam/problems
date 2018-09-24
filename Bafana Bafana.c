#include<stdio.h>

int main()

{
    int a,b;
    while(scanf("%d",&a)==1)
    {

        for(b=1;b<=a;b++)
        {

            int n,k,p,i,j,m,sum=0;
            scanf("%d %d %d",&n,&k,&p);




            if(p%n==0)
                   printf("Case %d: %d\n",b,k);

            else if(p<n)
            {
                m=k+p;
                if(m>n)
                {
                    m=m-n;
                }
                 printf("Case %d: %d\n",b,m);


            }
            else if((p%n!=0)&&(p>n))
                    {

                        m=p%n;
                         sum=k+m;
                         if(sum>n)
                            {
                                sum=sum-n;

                            }
                        printf("Case %d: %d\n",b,sum);
                    }

        }

    }
return 0;
}
