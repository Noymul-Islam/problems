#include<cstdio>
#include<cmath>

using namespace std;

int main()
{

    int n,b=0;
    printf("PERFECTION OUTPUT\n");

    while(scanf("%d",&n)==1)
    {



        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;

        }

        int i,j,m,sum=0;

        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
               sum=sum+i;
               if(sum>n)
                     break;

            }


        }
        printf("%5d",n);

        if(sum<n)
              printf("  DEFICIENT\n");

        else if(sum==n)
          printf("  PERFECT\n");
        else if(sum>n)
            printf("  ABUNDANT\n");

    }
    return 0;
}
