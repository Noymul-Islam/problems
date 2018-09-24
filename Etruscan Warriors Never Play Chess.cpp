#include<stdio.h>

int main()
{

    long long int a,b;

    while(scanf("%lld",&a)==1)
    {

        if(a==0)
             printf("0\n");
        else
        {



        for(b=0;b<a;b++)
        {



        long long int i=1,j=0,m,n=0,s,d,c;


        scanf("%lld",&m);
        for(i=1;;)
        {

            if((j>=m)||((m-i)<j))
                 break;

        j=j+i;
        n++;
        i++;






        }
        printf("%lld\n",n);




        }

        }


    }


    return 0;
}
