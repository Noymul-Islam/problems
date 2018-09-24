#include<cstdio>
#include<cmath>
using namespace std;
  int main()
  {

     long long  int a,b;

      while(scanf("%lld %lld",&a,&b)==2)
      {

           long long int number=0;

          a=a+b;
          while(a!=0)
          {
              a=a/10;
              number++;


          }
          printf("%lld\n",number);
      }
      return 0;

  }
