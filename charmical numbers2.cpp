#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int n;
     int ar[11];
     ar[0]=561;
     ar[1]=1105;
     ar[2]=1729;
     ar[3]=2465;
     ar[4]=2821;
     ar[5]=6601;
     ar[6]=8911;
     ar[7]=10585;
     ar[8]=15841;
     ar[9]=29341;
     ar[10]=41041;
     while(scanf("%d",&n)==1)
     {
         int c=0;
         if(n==0)
             break;
         else
            for(int i=0;i<11;i++)
         {
             if(ar[i]==n)
             {
                 printf("The number %d is a Carmichael number.\n",n);
                 c++;
                 break;
             }



         }
         if(c==0)
             printf("%d is normal.\n",n);
     }
    return 0;
}
