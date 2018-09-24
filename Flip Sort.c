#include<stdio.h>

int main()
{



     long long int  a;

    while(scanf("%d",&a)==1)

    {


       long long int c[a],b=0,n,m,j;
       int i;

        for(i=0;i<a;i++)
              scanf("%lld",&c[i]);

        for(i=0;i<a-1;i++)

        {


            for(j=i+1;j<a;j++)
            {
                {

                    if(c[i]>c[j])
                    {



                        b++;



                    }


                }
            }
        }


        printf("Minimum exchange operations : %lld\n",b);




    }

    return 0;
}
