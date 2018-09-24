#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

 long long int m;
 long long int calculat(long long int b,long long int p)
{
    if(p==0)
        return 1;
        if(p%2==0)
        {
            long long ret = calculat(b,p/2);
             return (((ret%m)*(ret%m))%m);


        }

    else
         return (((b%m)*(calculat(b,p-1)%m))%m);



}
int main()
{
   long long int b,p;

   while(scanf("%lld %lld %lld",&b,&p,&m)==3)
   {

       long long int res;

       res= calculat(b,p);
       printf("%lld\n",res);
   }

    return 0;
}
