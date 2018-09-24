#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
      int cases=1;
    while(t--)
    {
        int n;
        scanf("%d",&n);
         int sum=0,sum1=0,c=0,k=0;
         int temp=n;



             while(1)


   {


             while(n>0)
             {
                 sum=n%10;
                 sum=sum*sum;
                 n=n/10;
                 sum1+=sum;

             }

             if(sum1=0)
                {c++;
                break;
                }
             else if(sum1==temp)
             {
                 k++;
                 break;
             }
             else
             {
                n=sum1;
                sum1=0;

             }

    }


         if(c>0)
              printf("Case #%d: %d is a Happy number.\n",cases++,temp);

    }
    return 0;
}
