#include<stdio.h>

int main()
{
    int a,b;
    while(scanf("%d",&a)==1)
    {
        for(b=1;b<=a;b++)
        {

            double x,y,z,m,n,sum,res;

            scanf("%lf %lf %lf",&x,&y,&z);
            sum=((x+y)/3);
            m= (x-sum);
            res=(m*z)/(sum);
            printf("%0.0lf\n",res);
        }
    }
    return 0;
}
