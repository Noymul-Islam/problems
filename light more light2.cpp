#include<stdio.h>
#include<math.h>
int main()

{

    long long int a;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
             break;
         long long int b,c,m,n;
         b=sqrt(a);
         if(b*b==a)
                 printf("yes\n");
         else
             printf("no\n");



    }
return 0;
}
