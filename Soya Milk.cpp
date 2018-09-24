#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main()
{
      double l,w,h,t;
    while(scanf("%lf %lf %lf %lf",&l,&w,&h,&t)==4)
    {
         double angle=180-(90+t);
      //   printf("%lf\n",angle);
        double base=l/(tan((3.14159265358793*angle)/180));
        if(base<h)
        {//printf("%lf\n",base);
        double area=.5*base*l;
        double area1=l*h;
        double res=area1-area;
        printf("%0.3lf mL\n",res*w);}
        else
        {
            double base1=h*tan((3.14159265358793*(90-t))/180);
            double res=.5*base1*h*w;
            printf("%0.3lf mL\n",res);

        }

    }
    return 0;
}
