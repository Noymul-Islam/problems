#include<stdio.h>

int main()
{

    long long int s,d;
    while(scanf("%lld %lld",&s,&d)==2)
    {

        long long int a,b,i,j;

        while(d>0)
        {

            d=d-s;
            if(d>0)
            {
                s++;
            }


        }
        printf("%lld\n",s);


    }
    return 0;
}
