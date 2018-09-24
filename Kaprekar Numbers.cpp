#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    long long int number,cases;
    while(scanf("%lld",&number)==1)
    {
        for(cases=1; cases<=number; cases++)
        {
                                printf("case #%lld\n",cases);


            long long int mini,maxi;
            scanf("%lld %lld",&mini,&maxi);
            {

                long long int c=0;
                for( long long int i=mini; i<=maxi; i++)
                {
                     long long int first_half, second_half;
                    if(i<=3)
                        continue;

                    long long  int square= i*i;


                for( long long int j=10;j<=1000000000;j=j*10)
                    {


                     first_half= square/j;
                      second_half=square%j;


                    if((first_half>0) && (second_half >0))
                    {
                        long long int sum;
                        sum=first_half+second_half;
                        if(sum==i)
                        {
                            printf("%lld\n",i);
                            c++;
                            break;

                        }


                    }
                    }

                }
                if(c==0)
                    printf("no kaprekar numbers\n");


            }
            if(cases!=number)
            printf("\n");


        }

     }

    return 0;
}
