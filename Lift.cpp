#include<cstdio>
#include<cmath>
using namespace std;

 int main()
 {
     long long int t,cs=1,liftPos,myPos,tot;

     scanf("%lld",&t);

      while(t--)
     {
         tot=0;
         scanf("%lld %lld",&myPos,&liftPos);
         tot=abs(liftPos-myPos)*4+(3+5+3+3+5)+(myPos-0)*4;
         printf("Case %lld: %lld\n",cs++,tot);


     }


     return 0;
 }
