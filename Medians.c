#include<stdio.h>
#include<math.h>

int main()
{

    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {

        double s,area,m,n;

        if((a+b>c)&&(b+c>a)&&(c+a)>b)
        {
            s=(a+b+c)/2;
            m=(s*(s-a)*(s-b)*(s-c));
            n=(sqrt(m)*4)/3;
            printf("%.3lf\n",n);

        }
        else
             printf("-1.000\n");

    }
    return 0;
}
