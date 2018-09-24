#include<stdio.h>

int main()
{

    long long int z,l,I,M;
    int n=1;


    while(scanf("%lld %lld %lld %lld",&z,&I,&M,&l)==4)
    {

       if(z==0&&I==0&&M==0&&l==0)
          break;
        int sum=0,c=0;

        long long int k=l;

        while(1)
        {
          l=((z*l)+I)%M;


            sum++;

             if(l==k)
                 break;


        }

        printf("Case %d: %d\n",n,sum);
          n++;


    }
    return 0;
}
