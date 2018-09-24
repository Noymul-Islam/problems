#include<stdio.h>

int main()
{
    long long int a,b;

    while(scanf("%164d",&a)==1)
    {


        for(b=1;b<=a;b++)
        {


            long long int m,n,j,i,c,d,r,e;

            scanf("%164d %164d %164d",&r,&e,&c);

            if((r<0)&&(e<0))
            {
                c=c*(-1);
                if(r>(e+c))

                printf("do not advertise\n");
                else if(r<(e+c))
                    printf("advertise\n");
                else
                printf("does not matter\n");


            }

            else if(r>(e+c))
               printf("do not advertise\n");





                   else if(e>(r+c))
                        printf("advertise\n");


               else if((r+c)==e)
                     printf("does not matter\n");















        }



    }


    return 0;
}
