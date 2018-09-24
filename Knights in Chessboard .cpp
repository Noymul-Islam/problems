#include<cstdio>

using namespace std;
int main()
{
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        if(m==1&&n>1)
        printf("Case %d: %d\n",cs++,n);
        else if(n==1&&m>1)

        printf("Case %d: %d\n",cs++,m);
        else
        {
             int c=0;
            if(n>m)
            {
                int k=m;
                 m=n;
                 n=k;
            }
            int p=m;
            while(1)
            {

                if(p%n==0)
                {
                    p=p/n;
                    if(p==1)
                    {printf("Case %d: %d\n",cs++,(p*n)/2);
                       c++;
                       break;
                    }
                }
                else
                  break;

            }
            if(n%2==0&&m%2==0&&c==0)
            printf("Case %d: %d\n",cs++,(n*m)/2+n);
            else if((m*n)%2!=0)
            printf("Case %d: %d\n",cs++,(m*n)/2+1);
            else
              printf("Case %d: %d\n",cs++,(m*n)/2);
        }


    }
    return 0;
}
