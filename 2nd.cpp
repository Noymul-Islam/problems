#include<cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<0)
        {
            for(int i=n;i<=0;i++)
            {
                if(i==n)
                    printf("%d",i);
                 else
                  printf(" %d",i);
            }


        }
        else if(n>=0)
        {
            for(int i=0;i<=n;i++)
              {

                  if(i==0)
                     printf("%d",i);
                  else
                    printf(" %d",i);
              }

        }
        printf("\n");

    }

    return 0;
}
