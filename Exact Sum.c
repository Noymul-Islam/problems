#include<stdio.h>

int main()
{

    long int a[100000],b,c,i,j,m,n,d;
    while(scanf("%ld",&n)==1)
    {

        d=2000000;
        for(i=0;i<n;i++)
               scanf("%ld",&a[i]);

        scanf("%ld",&m);

        for(i=0;i<n-1;i++)
        {

            for(j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==m)
                {


                if(a[i]>a[j])
                {
                    if(a[i]-a[j]<d)
                    {
                         b=a[j];
                         c=a[i];
                    }

                }
                else
                {
                    if(a[j]-a[i]<d)
                    {
                        b=a[i];
                        c=a[j];
                    }
                }
                }

            }
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",b,c);
    }

    return 0;
}
