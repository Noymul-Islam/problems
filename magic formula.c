#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c,d,L,i,j,n,sum;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5)
    {
        if(a==0&&b==0&&c==0&&d==0&&L==0)
             break;
        long long int m=0;
        for(i=0;i<=L;i++)
        {
            sum=a*pow(i,2)+ b*i+c;
            if(sum%d==0)
                    m++;

        }
        printf("%lld\n",m);



    }
    return 0;

}
