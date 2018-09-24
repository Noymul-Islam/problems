#include <stdio.h>
int main()
{
    long int a,b,i,j,k,res;
    while(scanf("%ld %ld",&a,&b)==2 )
    {
        if(a==0 && b==0)
        break;
      if(b>a/2)b=a-b;
      res=1;
      for(i=a,j=1;i>b,j<=b;i--,j++){
        res=res*i;
         res=res/j;
      }
     printf("%ld\n",res);

    }
    return 0;
}
