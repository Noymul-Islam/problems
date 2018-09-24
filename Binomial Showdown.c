#include<stdio.h>

int main()
{
    long long int a,b;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0&&b==0)
              break;
        long long int m,n,k=1,c=1,i=1,j=1,p=1,res;


        if(a==b)
              printf("1\n");
        else
        {
            m=a-b;
            c=a;
        while(c>=1)
        {
            k=k*c;
            c--;
            if(c==b)
            {
                b=1;
                break;
            }
            else if(c==m)
            {
                m=1;
                break;
            }


        }

            if(m==1)
            {
                j=b;
                while(j>=1)
                {
                    i=j*i;
                    j--;
                }
            }
            else if(b==1)
            {
                j=m;
                while(j>=1)
                {
                    p=p*j;
                    j--;
                }
            }

            res=k/(p*i);

            printf("%lld\n",res);

        }

    }
    return 0;
}
