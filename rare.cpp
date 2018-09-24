#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
   unsigned long long  n_m;
   while(scanf("%llu",&n_m)==1)
   {
       if(n_m==0)
          break;
       unsigned long long m;
       int c=0;
       unsigned long long p=0;
       for(unsigned long long int i=n_m+1;p<=sqrt(n_m)+1;i++,p++)
       {
           m=i/10;
           if(i-m==n_m)
           {    if(c!=0)
                   printf(" ");
               printf("%llu",i);

               c++;

           }
           if(i-m>n_m)
               break;
       }
       printf("\n");



   }

    return 0;
}
