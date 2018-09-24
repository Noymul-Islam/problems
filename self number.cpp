#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
   int n=1;


 // printf("%d\n",n)

  for(;;)
  {
      if(n<9)
      {
          printf("%d\n",n);
          n=n+2;

      }
      else if(n<10000)
      {
        n=n+11;
         printf("%d\n",n);

      }
      if(n>=10000)
         break;



  }






return 0;

}
