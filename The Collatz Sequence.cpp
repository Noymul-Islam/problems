#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
   long long int n,L,cases=1,p;

   while(scanf("%lld %lld",&n,&L)==2)
   {

       if(n==-1 && L==-1)
           break;
           p=n;
         long long int sum=1;
        while(1)
       {
             if(n==1)
                 break;
           if(n%2==0)
           {
               n=n/2;

               sum++;
           }
           else
           {


               n=(3*n)+1;
               if(n>L)
                   break;
               sum++;

           }




       }

    printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",cases,p,L,sum);
       cases++;
   }

    return 0;
}
