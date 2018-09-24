#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int lower,upper,hold,test,i,j,k,divisor,max,req;
    scanf("%llu",&test);
    for(i=0;i<test;i++){

     scanf("%llu %llu",&lower,&upper);
     max=0;
     for(j=lower;j<=upper;j++){
         divisor=0;
       for(k=1;k<=sqrt(j);k++){
         if(j%k==0){
            divisor++;
         if(j/k==k){

                    }
         else divisor++;
         }

       }
       if(max<divisor){
        max=divisor;
        req=j;
       }


     }

    printf("Between %llu and %llu, %llu has a maximum of %llu divisors.\n",lower,upper,req,max);

    }



    return 0;
}
