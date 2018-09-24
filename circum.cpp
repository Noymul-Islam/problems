#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    double a1,a2,b1,b2,c1,c2;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2)==6)
    {

      double a_b,a_c,b_c,r,c=-1,crcm;

      a_b=sqrt((pow((a1-b1),2)+pow((a2-b2),2)));
      if(a_b>c)
         c=a_b;
      a_c=sqrt((pow((a1-c1),2)+pow((a2-c2),2)));
      if(a_c>c)
         c=a_c;
      b_c=sqrt((pow((c1-b1),2)+pow((c2-b2),2)));
      if(b_c>c)
          c=b_c;

      r=c/2;

      crcm=(2*3.141592653589793*r);
      printf("%0.2lf\n",crcm);


    }
    return 0;
}
